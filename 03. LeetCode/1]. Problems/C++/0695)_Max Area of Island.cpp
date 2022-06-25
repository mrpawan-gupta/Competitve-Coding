class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        
        if(!row) return 0;
        
        int maxArea = 0;
        for(int i = 0; i < row; i++){
            for(int j = 0; j < col; j++) {
                if(grid[i][j] == 1){
                    int area = 0;
                    island(grid, i, j, row, col, area);
                    maxArea = max(area, maxArea);
                }
            }
        }
        
        return maxArea;
    }
    void island(vector<vector<int>>& matrix, int x, int y, int row, int col, int& area){
        if(x < 0 || x >= row || y < 0 || y >= col || matrix[x][y] != 1)
            return;
        
        matrix[x][y] = 0;
        area++;

        island(matrix, x-1, y, row, col, area);
        island(matrix, x+1, y, row, col, area);
        island(matrix, x, y-1, row, col, area);
        island(matrix, x, y+1, row, col, area);
    }
};