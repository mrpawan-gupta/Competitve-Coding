class Solution {
public:
    bool isSafe(vector<vector<char>> &board , int row, int col, int n ){
        int b = col;
        int k=0;
        for(int i=row; i>=0; i--){
            if(board[i][col] == 'Q' ) return false;
            if(b+k < n && board[i][b+k] == 'Q') return false;
            if(b-k >=0 && board[i][b-k] == 'Q') return false;
            k++;
        }
        return true;
    }
    bool solve(vector<vector<char>> &board , int row , vector<vector<string>> &v , int n){
        if(row >= n){
            vector<string> sol;
            for(auto e: board){
                string s (e.begin(), e.end());
                sol.push_back(s);
            }
            v.push_back(sol);
            return true;
        }
        
        for(int col=0; col < n; col++){
            if(isSafe(board , row, col, n)){
                board[row][col]='Q';
                solve(board, row+1 , v , n);
                board[row][col] = '.';
            }
        }
        return false;
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<char> > board(n ,vector<char>(n , '.'));
        vector<vector<string>> v;
        solve(board, 0 , v , n);
        return v;
    }
};