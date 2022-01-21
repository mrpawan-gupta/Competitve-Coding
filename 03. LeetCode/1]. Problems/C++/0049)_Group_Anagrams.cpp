class Solution
{
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        map<vector<int>, vector<string>> m;
        vector<vector<string>> res;

        for (int i = 0; i < strs.size(); i++)
        {
            vector<int> v(26);
            for (int j = 0; j < strs[i].length(); j++)
            {
                v[strs[i][j] - 'a']++;
            }
            m[v].push_back(strs[i]);
        }

        for (auto x : m)
        {
            res.push_back(x.second);
        }
        return res;
    }
};