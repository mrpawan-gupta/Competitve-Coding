class Solution
{
public:
    bool wordPattern(string pattern, string s)
    {
        int words = 0;
        for (int i = 0; s[i]; i++)
            if (s[i] == ' ')
                words++;
        words += 1;
        if (words != pattern.length())
            return false;
        unordered_map<char, string> mp;  // letter to word
        unordered_map<string, char> mp2; // word to letter
        vector<string> v;
        string s1 = "";
        for (int i = 0; s[i]; i++)
        {
            if (s[i] != ' ')
            {
                s1 += s[i];
            }
            else
            {
                v.push_back(s1);
                s1 = "";
            }
        }
        v.push_back(s1);
        for (int i = 0; pattern[i]; i++)
        {
            if (mp.find(pattern[i]) == mp.end() && mp2.find(v[i]) == mp2.end())
            {
                mp[pattern[i]] = v[i];
                mp2[v[i]] = pattern[i];
            }
            else if (mp2.find(v[i]) != mp2.end() && mp.find(pattern[i]) != mp.end())
            {
                if (mp[pattern[i]] != v[i])
                    return false;
                if (mp2[v[i]] != pattern[i])
                    return false;
            }
            else
            {
                return false;
            }
        }
        return true;
    }
};