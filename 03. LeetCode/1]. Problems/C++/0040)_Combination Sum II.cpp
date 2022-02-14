class Solution
{
public:
    void func(vector<int> &candidates, int target, vector<vector<int>> &ans, vector<int> &v, int ind)
    {
        if (target == 0)
            ans.push_back(v);
        for (int i = ind; i < candidates.size(); i++)
        {
            if (candidates[i] > target)
                break;
            if (i == ind || (i > ind && candidates[i] != candidates[i - 1]))
            {
                v.push_back(candidates[i]);
                func(candidates, target - candidates[i], ans, v, i + 1);
                v.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        vector<int> v;
        vector<vector<int>> ans;
        sort(candidates.begin(), candidates.end());
        func(candidates, target, ans, v, 0);
        return ans;
    }
};