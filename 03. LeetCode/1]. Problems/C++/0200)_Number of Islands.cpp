class Solution
{
public:
    // FLOOD FILL ALGORITHM
    // Two array to go in all four direction up,down,left,right
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
    void floodfill(vector<vector<char>> &grid, int i, int j)
    {
        if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size())
        {
            return;
        }
        if (grid[i][j] == '0')
        {
            return;
        }
        grid[i][j] = '0';
        for (int x = 0; x < 4; x++)
        {
            floodfill(grid, i + dx[x], j + dy[x]);
        }
    }
    int numIslands(vector<vector<char>> &grid)
    {
        int count = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == '1')
                {
                    count++;               // number of time this function needs to be called is the ans
                    floodfill(grid, i, j); // this function changes each index of a island to 0
                }
            }
        }
        return count;
    }
};