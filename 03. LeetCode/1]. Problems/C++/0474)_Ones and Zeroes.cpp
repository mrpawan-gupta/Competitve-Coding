class Solution {
public:
    vector<vector<vector<int>>> dp;
    int count(string &s){
        int ret = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                ret++;
            }
        }
        return ret;
    }
    int Helper(vector<string> &str,int m,int n,int size){
        if(size<0){
            return 0;
        }
        if(dp[m][n][size]!=-1){
            return dp[m][n][size];
        }
        int z = count(str[size]);
        int on = str[size].size()-z;
        int ans = 0;
        if(m-z>=0 && n-on>=0){
           ans = 1+Helper(str,m-z,n-on,size-1);
        }
        ans = max(ans,Helper(str,m,n,size-1));
        return dp[m][n][size]=ans;
    }
    int findMaxForm(vector<string>& strs, int m, int n) {
        dp.resize(105,vector<vector<int>>(105,vector<int>(605,-1)));
        return Helper(strs,m,n,strs.size()-1);
    }
};