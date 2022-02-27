class Solution
{
public:
    int hammingWeight(uint32_t n)
    {
        int ans2 = 0;
        while (n > 0)
        {
            ans2 += n % 2;
            n /= 2;
        }
        return ans2;
    }
};