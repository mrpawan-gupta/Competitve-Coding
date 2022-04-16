class Solution
{
public:
    long long waysToBuyPensPencils(int a, int b, int m)
    {
        long long ans = 0;
        int i, a1;
        a1 = a / b;
        for (i = 0; i <= a1; ++i)
        {
            int cnt = a - (i * b);
            ans += (cnt / m) + 1;
        }
        return ans;
    }
};