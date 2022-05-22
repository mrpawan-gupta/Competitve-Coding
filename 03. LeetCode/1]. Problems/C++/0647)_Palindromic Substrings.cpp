class Solution {
public:
    int countSubstrings(string s) {
        
        int len = s.length();
        int cnt = 0;
        vector<vector<int>> dp(len, vector<int>(len, 0));
        for(int i = 0; i < len; i++) {
            dp[i][i] = 1;
            cnt++;
        }
        for(int i = 1; i < len; i++) {
            for(int j = 0; j < i; j++) {
                if((j + 1 == i && s[j] == s[i]) || (dp[j + 1][i - 1] == 1 && s[i] == s[j])) {
                    dp[j][i] = 1;
                    cnt++;
                }
            }
        }
        
        
        return cnt;
    }
};