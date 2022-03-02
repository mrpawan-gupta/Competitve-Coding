class Solution
{
public:
    bool checkStraightLine(vector<vector<int>> &coordinates)
    {
        int n = coordinates.size();

        int xdiff = coordinates[1][0] - coordinates[0][0]; // (x1 - x0)
        int ydiff = coordinates[1][1] - coordinates[0][1]; // (y1 - y0)

        for (int i = 2; i < n; i++)
        {
            int x1 = coordinates[i][0] - coordinates[0][0]; // (x - x0)
            int y1 = coordinates[i][1] - coordinates[0][1]; // (y - y0)

            if (x1 * ydiff != y1 * xdiff)
                return false;
        }

        return true;
    }
};