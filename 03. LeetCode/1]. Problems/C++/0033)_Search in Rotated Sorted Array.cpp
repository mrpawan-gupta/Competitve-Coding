class Solution
{
public:
    int getPivot(vector<int> &nums, int n)
    {
        int s = 0;
        int e = n - 1;
        int m = s + (e - s) / 2;
        while (s < e)
        {
            if (nums[m] >= nums[0])
            {
                s = m + 1;
            }
            else
            {
                e = m;
            }
            m = s + (e - s) / 2;
        }
        return s;
    }

    int binarySearch(vector<int> &nums, int s, int e, int target)
    {
        int m = s + (e - s) / 2;
        while (s <= e)
        {
            if (nums[m] == target)
            {
                return m;
            }
            else if (nums[m] < target)
            {
                s = m + 1;
            }
            else
            {
                e = m - 1;
            }
            m = s + (e - s) / 2;
        }
        return -1;
    }

    int search(vector<int> &nums, int target)
    {
        int n = nums.size();
        int pivot = getPivot(nums, n);
        if (target >= nums[pivot] && target <= nums[n - 1])
        {
            return binarySearch(nums, pivot, n - 1, target);
        }
        else
        {
            return binarySearch(nums, 0, pivot - 1, target);
        }
    }
};