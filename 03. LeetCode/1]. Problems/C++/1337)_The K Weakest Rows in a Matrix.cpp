bool compare(pair<int, int> a, pair<int, int> b)
{
    if (a.first == b.first)
    {
        return a.second < b.second;
    }
    return a.first < b.first;
}
class Solution
{
public:
    vector<int> kWeakestRows(vector<vector<int>> &mat, int k)
    {
        int n = mat.size();
        vector<pair<int, int>> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back({count(mat[i].begin(), mat[i].end(), 1), i});
        }
        sort(v.begin(), v.end(), compare);
        vector<int> ans;
        int i = 0;
        while (i < k)
        {
            ans.push_back(v[i].second);
            i++;
        }
        return ans;
    }
};