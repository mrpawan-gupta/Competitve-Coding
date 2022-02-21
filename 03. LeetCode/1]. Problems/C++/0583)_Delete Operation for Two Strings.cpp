class Solution{
public:
    int dp[501][501];
    int solve(string &s1, string &s2, int i, int j){
        if (i >= s1.size() && j >= s2.size())
            return 0;
        if (dp[i][j] != -1)
            return dp[i][j];
        if (i >= s1.size())
            return s2.size() - j;
        if (j >= s2.size())
            return s1.size() - i;
        if (s1[i] == s2[j]){
            return dp[i][j] = solve(s1, s2, i + 1, j + 1);
        }
        else{
            return dp[i][j] = 1 + min(solve(s1, s2, i + 1, j), solve(s1, s2, i, j + 1));
        }
    }
    int minDistance(string word1, string word2){
        memset(dp, -1, sizeof(dp));
        return solve(word1, word2, 0, 0);
    }
};