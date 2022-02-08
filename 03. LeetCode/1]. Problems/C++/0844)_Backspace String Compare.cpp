class Solution
{
public:
    string helper(string s)
    {
        string str = "";
        int i = s.size() - 1;
        int count = 0;

        while (i >= 0)
        {
            if (s[i] == '#')
            {
                count++;
            }
            else if (count > 0)
            {
                count--;
            }
            else
            {
                str.push_back(s[i]);
            }

            i--;
        }

        return str;
    }

    bool backspaceCompare(string s, string t)
    {
        string s1 = "", s2 = "";

        s1 = helper(s);
        s2 = helper(t);

        if (s1 == s2)
            return true;
        return false;
    }
};