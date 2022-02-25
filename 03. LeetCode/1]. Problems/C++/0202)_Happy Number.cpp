class Solution
{
    int nextn(int n)
    {
        int res = 0;
        while (n > 0)
        {
            int lastDigit = n % 10;
            n /= 10;
            res += lastDigit * lastDigit;
        }
        return res;
    }

public:
    bool isHappy(int n)
    {
        int s = n;
        int f = nextn(n);
        while (f != 1 && f != s)
        {
            s = nextn(s);
            f = nextn(nextn(f));
        }
        return f == 1;
    }
};