class Solution
{
public:
    bool carPooling(vector<vector<int>> &trips, int capacity)
    {
        vector<int> pass(1001, 0);
        for (auto it : trips)
        {
            pass[it[1]] += it[0];
            pass[it[2]] -= it[0];
        }
        for (int i = 0; i < 1001; i++)
        {
            if (i > 0)
                pass[i] += pass[i - 1];
            if (pass[i] > capacity)
                return false;
        }
        return true;
    }
};