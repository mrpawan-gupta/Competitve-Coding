class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int n = nums.size();
        int start = 0;
        int end = n - 1;
        if (nums[start] <= nums[end])
        {
            return nums[start];
        }
        while (start <= end)
        {
            int mid = start + (end - start) / 2;
            int next = (mid + 1) % n;
            int prev = (n + mid - 1) % n;
            if (nums[mid] < nums[next] and nums[mid] < nums[prev])
            {
                return nums[mid];
            }
            if (nums[mid] >= nums[0])
            {
                start = mid + 1;
            }
            else
            {
                end = mid - 1;
            }
        }

        return 0;
    }
};