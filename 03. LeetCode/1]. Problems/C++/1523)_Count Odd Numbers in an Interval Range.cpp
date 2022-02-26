class Solution
{
public:
    int countOdds(int low, int high)
    {
        return (low & 1) != 0 or (high & 1) != 0 ? 1 + ((high - low) >> 1) : (high - low) >> 1;
    }
};