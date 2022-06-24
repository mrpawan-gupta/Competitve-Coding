class Solution{
public:
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
    void floodfill(vector<vector<char>> &grid, int i, int j) {
        if (i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size()) {
            return;
        }
        if (grid[i][j] == '0') {
            return;
        }
        grid[i][j] = '0';
        for (int x = 0; x < 4; x++){
            floodfill(grid, i + dx[x], j + dy[x]);
        }
    }
    int numIslands(vector<vector<char>> &grid)  {
        int count = 0;
        for (int i = 0; i < grid.size(); ++i)  {
            for (int j = 0; j < grid[0].size(); ++j){
                if (grid[i][j] == '1'){
                    count++;               
                }
            }
        }
        return count;
    }
};