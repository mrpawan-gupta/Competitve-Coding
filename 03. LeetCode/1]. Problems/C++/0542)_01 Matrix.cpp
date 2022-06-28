class Solution {
private:
    bool checkValid(int i, int j, int m, int n){
        if(i<0 || i>=m || j<0 || j>=n)    return false;
        return true;
    }
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int rows = mat.size();
        int cols = mat[0].size();
        queue<pair<int,int>> q;
        
        for(int i = 0;i<rows;i++){
            for(int j=0;j<cols;j++){
                if(mat[i][j]==0)    q.push({i,j});
                else    mat[i][j] = -1;
            }
        }
		
        int offset[4][2] = {{0,1}, {1,0}, {0,-1}, {-1,0}};
        while(!q.empty()){
            auto [i,j] = q.front();
            for(auto [ni,nj]:offset){
                ni += i;  nj += j;
                if(checkValid(ni,nj,rows,cols) && mat[ni][nj]==-1){
                    q.push({ni,nj});
                    mat[ni][nj] = mat[i][j] + 1;
                }
            }
            q.pop();
        }
        return mat;
    }
};