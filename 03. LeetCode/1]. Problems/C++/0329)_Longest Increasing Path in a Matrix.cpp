class Solution {
public:
    int help(vector<vector<int>>& mat, int i, int j, vector<vector<int>>& h) {
        if(h[i][j] != -1) return h[i][j];
        int dx[] = {0,0,1,-1};
        int dy[] = {1,-1,0,0};
        int count = 0;
        for(int n = 0; n < 4; n++){
            int new_i = dx[n] + i;
            int new_j = dy[n] + j;
            if(new_i >= 0 && new_j >= 0 && new_i < mat.size() && new_j < matridx[i].size()) {
                if(matridx[new_i][new_j] > matridx[i][j])
                count = max(count,1+help(mat,new_i,new_j,h));
            }
        }
        h[i][j] = count;
        return h[i][j];
    }
    
    int longestIncreasingPath(vector<vector<int>>& mat) {
        vector<vector<int>> h (mat.size(),vector<int>(matridx[0].size(),-1));
        int ans = 0;
        for(int i = 0; i < mat.size(); i++)
        {
            for(int j = 0; j < matridx[0].size(); j++)
            {
               ans = max(ans,1+help(mat,i,j,h));
            }
        }
        return ans;
    }
};