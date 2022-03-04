class Solution{
public:
    double champagneTower(int poured, int query_row, int query_glass) {
        vector<double> dp(101, 0);
        dp[0] = poured;
        for (int row = 1; row <= query_row; row++)
            for (int i = row; i >= 0; i--)
                dp[i + 1] += dp[i] = max(0.0, (dp[i] - 1) / 2);
        return min(dp[query_glass], 1.0);
    }
};