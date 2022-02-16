class Solution
{
public:
    int rob(vector<int> &nums)
    {
        int n = nums.size();
        if (n == 1)
            return nums[0];
        if (n == 2)
            return max(nums[0], nums[1]);
        int d[n + 1];
        d[n - 2] = nums[n - 2];
        d[n - 3] = max(nums[n - 2], nums[n - 3]);
        for (int i = n - 4; i >= 0; i--)
        {
            d[i] = max(d[i + 2] + nums[i], d[i + 1]);
        }
        int a = d[0];
        d[n - 1] = nums[n - 1];
        d[n - 2] = max(nums[n - 1], nums[n - 2]);
        for (int i = n - 3; i >= 0; i--)
        {
            d[i] = max(d[i + 2] + nums[i], d[i + 1]);
        }
        return max(d[1], a);
    }
};