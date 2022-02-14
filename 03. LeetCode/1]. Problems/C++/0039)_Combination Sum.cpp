class Solution
{
public:
    void generate(int index, int target, vector<int> &arr, vector<vector<int>> &ans, vector<int> &ds)
    {
        if (index == arr.size())
        {
            if (target == 0)
            {
                ans.push_back(ds);
            }
            return;
        }

        if (arr[index] <= target)
        {
            ds.push_back(arr[index]);
            generate(index, target - arr[index], arr, ans, ds);
            ds.pop_back();
        }

        generate(index + 1, target, arr, ans, ds);
    }

public:
    vector<vector<int>> combinationSum(vector<int> &arr, int target)
    {
        vector<vector<int>> ans;
        vector<int> ds;
        int index = 0;
        generate(index, target, arr, ans, ds);
        return ans;
    }
};