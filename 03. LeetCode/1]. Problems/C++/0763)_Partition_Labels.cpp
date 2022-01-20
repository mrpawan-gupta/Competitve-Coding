class Solution
{
public:
    vector<int> partitionLabels(string s)
    {
        unordered_map<char, int> mp;
        int n = s.length();
        for (int i = 0; i < n; i++)
        {
            mp[s[i]] = i;
        }
        vector<int> ans;
        int Max = INT_MIN;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            int curr_max = mp[s[i]];
            Max = max(Max, curr_max);
            if (Max == i)
            {
                ans.push_back(count + 1);
                count = 0;
            }
            else
                count++;
        }
        return ans;
    }
};