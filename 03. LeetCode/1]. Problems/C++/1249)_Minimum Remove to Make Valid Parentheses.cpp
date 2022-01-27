class Solution
{
public:
    string minRemoveToMakeValid(string s)
    {
        int countLeft = 0;
        int countRight = 0;
        for (auto it = s.begin(); it < s.end(); ++it)
        {
            if (*it == '(')
            {
                countLeft++;
            }
            if (*it == ')')
            {
                countRight++;
            }
            if (countRight > countLeft)
            {
                s.erase(it);
                it--;
                countRight--;
            }
        }

        countRight = 0;
        countLeft = 0;
        for (auto it = s.end() - 1; it >= s.begin(); --it)
        {
            if (*it == '(')
            {
                countLeft++;
            }
            if (*it == ')')
            {
                countRight++;
            }
            if (countRight < countLeft)
            {
                s.erase(it);
                countLeft--;
            }
        }
        return s;
    }
};