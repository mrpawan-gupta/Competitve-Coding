class Solution
{
public:
    vector<int> countBits(int n)
    {
        vector<int> count(n + 1, 0);
        for (int i = 1; i <= n; i++)
            count[i] = 1 + count[i & (i - 1)];
        return count;
    }
};