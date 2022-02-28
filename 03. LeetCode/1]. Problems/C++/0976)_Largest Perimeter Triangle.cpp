class Solution
{
public:
    int largestPerimeter(vector &nums)
    {
        int l = nums.size();
        sort(nums.begin(), nums.end());
        long long int sum = 0;
        int i = l - 1;
        while (i >= 0)
        {
            if (nums[i - 2] + nums[i - 1] > nums[i] && nums[i] + nums[i - 1] > nums[i - 2] && nums[i] + nums[i - 2] > nums[i - 1])
            {
                sum = nums[i] + nums[i - 1] + nums[i - 2];
                return sum;
            }
            if (i - 2 <= 0)
                break;
            i--;
        }
        return 0;
    }
};