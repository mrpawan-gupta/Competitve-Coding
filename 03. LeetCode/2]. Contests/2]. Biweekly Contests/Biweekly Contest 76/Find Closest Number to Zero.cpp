class Solution
{
public:
    int findClosestNumber(vector<int> &b)
    {
        int i, n;
        int ans = abs(b[0]);
        for (i = 0; i < b.size(); ++i)
        {
            ans = min(ans, abs(b[i]));
        }
        n = -1 * ans;
        for (auto x : b)
        {
            if (abs(x) == ans)
                n = max(n, x);
        }
        return n;
    }
};