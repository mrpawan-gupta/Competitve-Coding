class Solution
{
public:
    vector<vector<int>> subsets(vector<int> &nums)
    {

        int n = nums.size();
        int numOfSubsets = pow(2, n);

        vector<vector<int>> ans(numOfSubsets);

        for (int mask = 0; mask < numOfSubsets; mask++)
        {
            for (int i = 0; i < n; i++)
            {

                if (mask & (1 << i))
                {
                    ans[mask].push_back(nums[i]);
                }
            }
        }

        return ans;
    }
};