class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
            return false;

        unordered_map<char, int> ms;
        unordered_map<char, int> mt;

        for (auto i : s)
            ms[i]++;

        for (auto i : t)
            mt[i]++;

        for (int i = 0; i < s.size(); i++)
        {
            if (ms[s[i]] != mt[s[i]])
                return false;
        }
        return true;
    }
};