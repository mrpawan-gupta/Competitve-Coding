class Solution
{
public:
    int integerBreak(int n)
    {
        int *dp = new int[n + 1];
        dp[0] = 0;
        dp[1] = 1;
        for (int i = 2; i <= n; i++)
        {

            int ans = i;

            for (int j = 0; j < i; j++)
            {

                if (i == n && j == 0)
                {
                    ans = 0;
                    continue;
                }
                ans = max(ans, j * dp[i - j]);
            }

            dp[i] = ans;
        }
        return dp[n];
    }
};