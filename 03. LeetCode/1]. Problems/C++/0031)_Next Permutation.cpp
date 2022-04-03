class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int i = 0, n = nums.size() - 1;
        for (i = n; i > 0; i--)
        {
            if (nums[i] > nums[i - 1])
            {
                break;
            }
        }
        if (i <= 0)
        {
            sort(nums.begin(), nums.end());
            return;
        }
        for (int j = n; j >= 0; j--)
        {
            if (nums[j] > nums[i - 1])
            {
                swap(nums[j], nums[i - 1]);
                sort(nums.begin() + i, nums.end());
                break;
            }
        }
    }
};