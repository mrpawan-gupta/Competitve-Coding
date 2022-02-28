class Solution
{
public:
    int nearestValidPoint(int x, int y, vector<vector<int>> &p, int mindi = INT_MAX, int idx = 0)
    {
        for (int i = 0; i < p.size(); i++)
        {
            if (p[i][0] == x || p[i][1] == y)
            {
                int di = abs(x - p[i][0]) + abs(y - p[i][1]);
                if (di < mindi)
                {
                    mindi = di;
                    idx = i;
                }
            }
        }
        return mindi == INT_MAX && idx == 0 ? -1 : idx;
    }
};