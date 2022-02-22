class Solution
{
public:
    int coinChange(vector<int> &coins, int amt)
    {
        int dp[amt + 1];
        dp[0] = 0;
        sort(coins.begin(), coins.end());
        for (int i = 1; i <= amt; i++)
        {
            dp[i] = INT_MAX;

            for (auto c : coins)
            {
                if (i < c)
                    break;
                if (dp[i - c] != INT_MAX)
                    dp[i] = min(dp[i], 1 + dp[i - c]);
            }
        }
        return (dp[amt] == INT_MAX) ? -1 : dp[amt];
    }
};