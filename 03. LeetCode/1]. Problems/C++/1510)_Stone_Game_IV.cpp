class Solution{
public:
    int dp[100001];
    bool solve(int n)
    {
        if (n == 0)
            return false;
        if (dp[n] != -1)
            return dp[n];
        bool flag = false;
        for (int i = 1; i * i <= n; ++i)
        {
            flag |= !solve(n - (i * i));
        }
        return dp[n] = flag;
    }

    bool winnerSquareGame(int n)
    {
        memset(dp, -1, sizeof(dp));
        return solve(n);
    }
};