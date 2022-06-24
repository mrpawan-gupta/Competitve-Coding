class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        
        if(!row)
            return 0;
        
        int island = 0;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++){
                if(grid[i][j] == '1'){
                    markNearByIsland(grid, i, j, row, col);
                    island++;
                }
            }
        }
        return island;
    }
    
    
    void markNearByIsland(vector<vector<char>>& grid, int x, int y, int row, int col) {
        if(x < 0 || x >= row || y < 0 || y >= col || grid[x][y] != '1')
            return;
        
        grid[x][y] = '0';
        
        markNearByIsland(grid, x-1, y, row, col);
        markNearByIsland(grid, x+1, y, row, col);
        markNearByIsland(grid, x, y-1, row, col);
        markNearByIsland(grid, x, y+1, row, col);
    }
};