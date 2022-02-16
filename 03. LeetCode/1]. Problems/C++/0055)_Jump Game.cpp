class Solution
{
public:
    int dp[10001];
    bool solve(vector<int> &nums, int i)
    {
        if (i == nums.size() - 1)
            return dp[i] = true;
        else if (i > nums.size() - 1)
            return false;
        if (dp[i] != -1)
            return dp[i];
        for (int j = 1; j <= nums[i]; j++)
        {
            if (solve(nums, i + j))
                return dp[i] = true;
        }
        return dp[i] = false;
    }
    bool canJump(vector<int> &nums)
    {
        memset(dp, -1, sizeof(dp));
        return solve(nums, 0);
    }
};