class Solution
{
public:
    void sub(int index, vector<int> &nums, set<vector<int>> &hash, int n)
    {
        static vector<int> ans;
        if (index >= n)
        {
            hash.insert(ans);
            return;
        }
        ans.push_back(nums[index]);
        sub(index + 1, nums, hash, n);
        ans.pop_back();
        sub(index + 1, nums, hash, n);
    }

    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        int n = nums.size();
        set<vector<int>> hash;
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        sub(0, nums, hash, n);
        for (auto x : hash)
            ans.push_back(x);
        return ans;
    }
};