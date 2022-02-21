class Solution
{
public:
    int mp[1001][1001];
    int dp[1001][1001];

    int lcs(string s1, string s2, int i, int j)
    {
        if (mp[i][j] != -1)
            return mp[i][j];
        if (j == s2.length())
            return 0;
        if (i == s1.length())
            return 0;
        int a1 = 0, a2 = 0;
        int ans = 0;
        if (s1[i] == s2[j])
        {
            ans = a1 = 1 + lcs(s1, s2, i + 1, j + 1);
        }
        else
        {
            a1 = lcs(s1, s2, i + 1, j);
            a2 = lcs(s1, s2, i, j + 1);
            ans = max(a1, a2);
        }
        return mp[i][j] = ans;
    }

    int longestCommonSubsequence(string s1, string s2)
    {
        memset(mp, 0, sizeof(mp));
        int n = s1.length();
        int m = s2.length();

        for (int i = m - 1; i >= 0; i--)
        {
            for (int j = n - 1; j >= 0; j--)
            {
                if (s1[j] == s2[i])
                {
                    dp[i][j] = 1 + dp[i + 1][j + 1];
                }
                else
                {
                    dp[i][j] = max(dp[i + 1][j], dp[i][j + 1]);
                }
            }
        }
        return dp[0][0];
    }
};