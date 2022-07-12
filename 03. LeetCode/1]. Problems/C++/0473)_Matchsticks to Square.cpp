class Solution{
public:
    bool makesquare(vector<int> &matchsticks) {
        int n = matchsticks.size();
        int Sum = 0;

        for (int i = 0; i < n; i++){
            Sum = Sum + matchsticks[i];
        }
        if (n < 4 or Sum % 4 != 0)  return false;

        int net = Sum / 4;
        vector<int> dp((1 << n), -1);
        dp[0] = 0;   

        for (int bit = 0; bit < (1 << n); bit++){
            if (dp[bit] == -1) continue;

            for (int j = 0; j < n; j++){
                if (!(bit & (1 << j)) && dp[bit] + matchsticks[j] <= net) {
                    dp[bit | (1 << j)] = (dp[bit] + matchsticks[j]) % net;
                }
            }
        }
        return dp[(1 << n) - 1] == 0 ? true : false;
    }
};