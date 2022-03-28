class Solution
{
public:
    bool search(vector<int> &nums, int X)
    {
        int n = nums.size(), l = 0, r = n - 1;

        while (l <= r)
        {
            int m = l + (r - l) / 2;

            if (nums[m] == X)
                return true;

            else if (nums[l] == nums[m] && nums[r] == nums[m])
                l++, r--;

            else if (nums[l] <= nums[m])
            {

                if (nums[l] <= X && nums[m] > X)
                    r = m - 1;
                else
                    l = m + 1;
            }
            else
            {
                if (nums[r] >= X && nums[m] < X)
                    l = m + 1;
                else
                    r = m - 1;
            }
        }
        return false;
    }
};