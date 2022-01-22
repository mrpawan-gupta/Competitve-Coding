class Solution
{
public:
    vector<string> findRepeatedDnaSequences(string s)
    {
        vector<string> ans;
        int n = s.length();
        map<string, int> m;
        for (int i = 0; i <= n - 10; i++)
        {
            string sub = s.substr(i, 10);
            m[sub]++;
        }
        for (auto it : m)
        {
            if (it.second > 1)
            {
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};