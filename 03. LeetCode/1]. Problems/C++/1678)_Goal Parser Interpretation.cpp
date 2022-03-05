class Solution
{
public:
    string interpret(string s)
    {
        string str;
        for (int i = 0; i < s.size();)
        {
            if (s[i] == 'G')
                str.push_back('G'), i++;
            else if (s[i + 1] == ')')
                str.push_back('o'), i += 2;
            else
            {
                str.push_back('a');
                str.push_back('l');
                i += 4;
            }
        }
        return str;
    }
};