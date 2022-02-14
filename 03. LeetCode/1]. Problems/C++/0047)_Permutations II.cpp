class Solution
{
public:
    set<vector<int>> res;
    int n;

    void backtrack(vector<int> &nums, int i)
    {
        if (i == n)
        {
            res.insert(nums);
            return;
        }

        for (int j = i; j <= n; j++)
        {
            swap(nums[j], nums[i]);
            backtrack(nums, i + 1);
            swap(nums[j], nums[i]);
        }
    }

    vector<vector<int>> permuteUnique(vector<int> &nums){
        vector<vector<int>> ans;
        n = nums.size() - 1;
        backtrack(nums, 0);
        for (auto v : res)
        {
            ans.push_back(v);
        }
        return ans;
    }
};