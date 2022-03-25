class Solution{
public:
    int dp[51][51];
    int minCost(int i, int a, int b, int n, vector<vector<int>> &costs){
        if (i == n){
            return 0;
        }
        if (dp[a][b] != -1){
            return dp[a][b];
        }
        int mini = INT_MAX;
        if (a > 0){
            mini = min(mini, costs[i][0] + minCost(i + 1, a - 1, b, n, costs));
        }
        if (b > 0){
            mini = min(mini, costs[i][1] + minCost(i + 1, a, b - 1, n, costs));
        }
        return dp[a][b] = mini;
    }
    int twoCitySchedCost(vector<vector<int>> &costs) {
        int n = costs.size();
        n = n / 2;
        memset(dp, -1, sizeof(dp));
        return minCost(0, n, n, 2 * n, costs);
    }
};