class Solution {
public:
    int m, n;
    int dp(int x, int y, vector<vector<int>>& depth, vector<vector<int>>& matrix ) {
        if(depth[x][y] != -1) return depth[x][y];
        int mx =1;
        if(x<m-1 && matrix[x][y]<matrix[x+1][y])
            mx = max(mx,1 + dp(x+1,y,depth,matrix));
        if(x>0 && matrix[x][y]<matrix[x-1][y])
            mx = max(mx,1 + dp(x-1,y,depth,matrix));
        if(y<n-1 && matrix[x][y]<matrix[x][y+1])
            mx = max(mx,1 + dp(x,y+1,depth,matrix));
        if(y>0 && matrix[x][y]<matrix[x][y-1])
            mx = max(mx,1 + dp(x,y-1,depth,matrix));
        depth[x][y] = mx;
        return mx;
    }
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int res = 1;     
        m = matrix.size();
        n = matrix[0].size();
        vector<vector<int> > depth( m , vector<int> (n, -1));  
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++)
            res = max(res,dp(i,j,depth,matrix));
        }
        return res;
    }
};