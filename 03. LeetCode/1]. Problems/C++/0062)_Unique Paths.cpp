class Solution
{
public:
    int pathfinder(vector<vector<int>> &dp, int m, int n, int i, int j)
    {
        if (i < 0 || j < 0)
        {
            return 0;
        }

        if (i == 0 && j == 0)
        {
            return 1;
        }

        if (dp[i][j] > -1)
        {
            return dp[i][j];
        }

        dp[i][j] = pathfinder(dp, m, n, i - 1, j) + pathfinder(dp, m, n, i, j - 1);
        return dp[i][j];
    }

    int uniquePaths(int m, int n)
    {

        vector<vector<int>> dp(m, vector<int>(n, -1));

        return pathfinder(dp, m, n, m - 1, n - 1);
    }
};