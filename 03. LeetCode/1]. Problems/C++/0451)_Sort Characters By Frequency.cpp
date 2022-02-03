class Solution
{
public:
    string frequencySort(string s)
    {
        int n = s.length();
        unordered_map<char, int> m;
        for (int i = 0; i < n; i++)
        {
            m[s[i]]++;
        }
        priority_queue<pair<int, char>> q;
        for (auto it : m)
        {
            q.push({it.second, it.first});
        }
        string ans = "";
        while (!q.empty())
        {
            int t = q.top().first;
            while (t--)
            {
                ans += q.top().second;
            }
            q.pop();
        }
        return ans;
    }
};