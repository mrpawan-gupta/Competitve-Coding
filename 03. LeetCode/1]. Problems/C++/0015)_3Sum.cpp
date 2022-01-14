class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int n = nums.size();
        int l, r;
        for (int i = 0; i < n - 2; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            if (nums[i] > 0)
                break;
            l = i + 1;
            r = n - 1;
            while (l < r)
            {
                int sum = nums[i] + nums[l] + nums[r];
                if (sum < 0)
                    l++;
                else if (sum > 0)
                    r--;
                else
                {
                    ans.push_back(vector<int>{nums[i], nums[l], nums[r]});
                    while (l + 1 < r && nums[l] == nums[l + 1])
                        l++;
                    while (r - 1 > l && nums[r] == nums[r - 1])
                        r--;
                    l++;
                    r--;
                }
            }
        }
        return ans;
    }
};