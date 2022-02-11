class Solution
{
public:
    bool checkInclusion(string s1, string s2)
    {
        if (s2.length() < s1.length())
        {
            return false;
        }
        int n = s1.length();
        unordered_map<char, int> h;
        for (int i = 0; i < n; i++)
        {
            h[s1[i]]++;
        }
        unordered_map<char, int> mp;
        int j = 0;
        while (j < n)
        {
            mp[s2[j]]++;
            j++;
        }

        for (int i = n; i < s2.length(); i++)
        {
            if (mp == h)
            {
                return true;
            }
            mp[s2[i]]++;
            mp[s2[i - n]]--;
            if (mp[s2[i - n]] <= 0)
            {
                mp.erase(s2[i - n]);
            }
        }
        if (mp == h)
        {
            return true;
        }
        return false;
    }
};