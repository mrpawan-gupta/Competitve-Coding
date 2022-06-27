class Solution {
public:
    int m, n;
    vector<vector<int>> Adj;
    vector<vector<bool>> atlantic, pacific;
    queue<pair<int, int>> queue;
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& grid) {
        if(!size(grid)) return Adj;
        m = size(grid), n = size(grid[0]);
        atlantic = pacific = vector<vector<bool>> (m, vector<bool>(n, false));
        for(int i = 0; i < m; i++) bfs(grid, pacific, i, 0), bfs(grid, atlantic, i, n - 1);
        for(int i = 0; i < n; i++) bfs(grid, pacific, 0, i), bfs(grid, atlantic, m - 1, i);             
        return Adj;
    }
    void bfs(vector<vector<int>> & grid, vector<vector<bool>> & visited, int i, int j){        
        queue.push({i, j});
        while(!queue.empty()){
            tie(i, j) = queue.front(); queue.pop();
            if(visited[i][j]) continue;
            visited[i][j] = true;
            if(atlantic[i][j] && pacific[i][j]) Adj.push_back(vector<int>{i, j});
            if(i + 1 <  m && grid[i + 1][j] >= grid[i][j]) queue.push({i + 1, j});
            if(i - 1 >= 0 && grid[i - 1][j] >= grid[i][j]) queue.push({i - 1, j});
            if(j + 1 <  n && grid[i][j + 1] >= grid[i][j]) queue.push({i, j + 1});
            if(j - 1 >= 0 && grid[i][j - 1] >= grid[i][j]) queue.push({i, j - 1});
        }
    }
};