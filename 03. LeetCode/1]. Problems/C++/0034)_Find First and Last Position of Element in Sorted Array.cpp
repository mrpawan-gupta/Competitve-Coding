class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        int a = 0, b = nums.size() - 1;
        if (nums.empty())
            return {-1, -1};
        if (nums[b] < target || nums[a] > target)
            return {-1, -1};

        while (a <= b && b >= 0)
        {

            if (nums[a] == target && nums[b] == target)
                return {a, b};
            if (nums[a] < target)
                a++;
            if (a == b)
            {
                if (nums[a] == target)
                    return {a, a};
                else
                    break;
            }
            if (nums[b] > target)
                b--;
        }
        return {-1, -1};
    }
};