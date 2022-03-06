class Solution
{
public:
    string freqAlphabets(string s)
    {
        string s1;
        for (int i = 0; i < s.size();)
        {
            if (i + 2 < s.size() && s[i + 2] == '#')
            {
                int a = (s[i] - '0') * 10 + (s[i + 1] - '0');
                s1 += char(a + 'a' - 1);
                i += 3;
            }
            else
            {
                int a = (s[i] - '0');
                s1 += char(a + 'a' - 1);
                i++;
            }
        }
        return s1;
    }
};