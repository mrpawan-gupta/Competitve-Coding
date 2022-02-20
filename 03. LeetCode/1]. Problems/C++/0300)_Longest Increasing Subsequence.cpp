class Solution
{
public:
    int lengthOfLIS(vector<int> &nums)
    {
        vector<int> dp(nums.size(), -1);
        int ans = 1;
        dp[0] = 1;

        for (int i = 1; i < nums.size(); i++)
        {
            int imax = 0;
            for (int j = 0; j < i; j++)
            {
                if (nums[j] < nums[i])
                {
                    if (dp[j] > imax)
                    {
                        imax = dp[j];
                    }
                }
            }
            dp[i] = imax + 1;
            ans = max(ans, dp[i]);
        }
        return ans;
    }
};