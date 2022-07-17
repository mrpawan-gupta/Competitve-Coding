class Solution {
public:
    int dp[51][51][52];
    int mod = 1e9+7;
    
    int countPath(int &m,int &n,int x, int r,int c){
        if(r==m || c==n || r<0 || c<0) return 1; 
        if(x==0) return 0;
        int ans =0;
        if(dp[r][c][x]!=-1)
            return dp[r][c][x];
        
        ans = ( ans + countPath(m,n,x-1,r-1,c)) % mod; 
        ans = ( ans + countPath(m,n,x-1,r+1,c)) % mod; 
        ans = ( ans + countPath(m,n,x-1,r,c+1)) % mod; 
        ans = ( ans + countPath(m,n,x-1,r,c-1)) % mod;      
        return dp[r][c][x] = ans;
    }
    
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) {
        memset(dp,-1,sizeof(dp));
        return countPath(m,n,maxMove,startRow,startColumn);
    }
};