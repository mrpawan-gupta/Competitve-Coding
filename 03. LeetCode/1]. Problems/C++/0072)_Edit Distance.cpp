class Solution
{
public:
    int minDistance(string word1, string word2)
    {
        int n = word2.size();
        int m = word1.size();
        vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= m; j++)
            {
                if (i == 0 or j == 0)
                    dp[i][j] = max(i, j);
                else if (word2[i - 1] != word1[j - 1])
                {
                    dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + 1;
                }
                else
                    dp[i][j] = dp[i - 1][j - 1];

                cout << dp[i][j] << " ";
            }
            cout << endl;
        }

        return dp[n][m];
    }
};