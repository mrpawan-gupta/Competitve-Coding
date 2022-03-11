class Solution
{
public:
    string convert(string s, int numRows)
    {
        string result = "";

        if (numRows == 1)
            return s;

        bool goingDown;
        int lowGap, upGap, j;

        for (int i = 0; i < numRows; i++)
        {
            goingDown = true;
            lowGap = 2 * (numRows - i - 1);
            upGap = 2 * i;

            j = i;
            while (j < s.length())
            {
                if (goingDown && lowGap != 0)
                {
                    result += s[j];
                    j += lowGap;
                }
                else if (!goingDown && upGap != 0)
                {
                    result += s[j];
                    j += upGap;
                }
                goingDown = !goingDown;
            }
        }

        return result;
    }
};