class Solution
{
public:
    int jump(vector<int> &nums)
    {
        int n = nums.size();

        vector<int> dp(n, 0);

        for (int i = n - 2; i >= 0; --i)
        {
            int steps = 10010;

            for (int j = 1; j <= nums[i]; ++j)
            {
                if (i + j >= n)
                    break;

                if (!dp[i + j] and i + j != n - 1)
                    continue;

                steps = min(steps, dp[i + j] + 1);
            }

            if (steps == 10010)
                steps = 0;

            dp[i] = steps;
        }

        return dp[0];
    }
};