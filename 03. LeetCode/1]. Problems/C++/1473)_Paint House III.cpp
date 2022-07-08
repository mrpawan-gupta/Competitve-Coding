class Solution {
public:
    int minCost(vector<int>& houses, vector<vector<int>>& cost, int m, int n, int target) {
        swap(n,m);
        
        memset(dp,-1,sizeof(dp));
        
        int ans = fun(houses,cost,n,m,target,0,0,0);
        
        if(ans>=1e9){
            return -1;
        }
        return ans;
    }
    int dp[101][101][21];
    
    int fun(vector<int>& houses, vector<vector<int>>& cost, int& n,int& m, int& target,int ix,int last,int tg){
        
        if(ix==n){
            if(tg==target){
                return 0;
            }
            return 1e9;
        }
        
        if(dp[ix][tg][last]!=-1){
            return dp[ix][tg][last];
        }
        int res =1e9;
        
        if(houses[ix]!=0){
            res = fun(houses,cost,n,m,target,ix+1,houses[ix], (last==houses[ix])?tg:(tg+1));
        }else{
            for(int i =1;i<=m;i++){
                res = min(res, cost[ix][i-1]+fun(houses,cost,n,m,target,ix+1,i,(last==i)?tg:(tg+1)) );
            }
        }
        return dp[ix][tg][last]=res;
        
    }
    
};