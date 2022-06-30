class Solution {
public:
    bool isMatch(string s, string p) {
        bool dp[21][31] = { true };
        for (auto i = 0; i <= s.size(); ++i)
            for (auto j = 1; j <= p.size(); ++j)
                if (p[j - 1] == '*') 
                    dp[i][j] = dp[i][j - 2] || (i > 0 && dp[i - 1][j] && (p[j - 2] == '.' || p[j - 2] == s[i - 1]));
                else 
                    dp[i][j] = i > 0 && dp[i - 1][j - 1] && (p[j - 1] == '.' || p[j - 1] == s[i - 1]); 
        return dp[s.size()][p.size()];
    }
};