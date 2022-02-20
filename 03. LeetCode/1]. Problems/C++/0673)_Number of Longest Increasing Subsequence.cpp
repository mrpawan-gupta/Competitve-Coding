class Solution{
public:
    int findNumberOfLIS(vector<int> &nums){

        int n = nums.size();
        int max_len = 1, ans = 0;
        vector<int> dp(n, 1);
        vector<int> count(n, 1);

        for (int i = 1; i < n; i++){
            for (int j = 0; j < i; j++){
                if (nums[i] > nums[j]){
                    if (dp[i] < dp[j] + 1){
                        dp[i] = 1 + dp[j];

                        count[i] = count[j];
                    }
                    else if (dp[i] == dp[j] + 1){
                        count[i] = count[i] + count[j];
                    }
                }
            }
            max_len = max(max_len, dp[i]);
        }
        for (int i = 0; i < n; i++){
            if (dp[i] == max_len){
                ans = ans + count[i];
            }
        }
        return ans;
    }
};