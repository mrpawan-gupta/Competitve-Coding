class Solution {
public:
    
    queue<pair<pair<int,int>,int>> q;
    
    void dfs(vector<vector<int>>& grid, int x, int y, int __row, int __col, vector<vector<bool>> &visisted){
        if(x<0 || x>=__row || y<0 || y>=__col || visisted[x][y] || grid[x][y]==0) return;
        visisted[x][y] = true;
        grid[x][y] = 0;
        q.push({{x,y},0});
        
        int dx[] = {0,1,0,-1};
        int dy[] = {1,0,-1,0};
        
        for(int i=0;i<4;++i){
            int x1 = x+dx[i], y1 = y+dy[i];
            if(x1<0 || x1>=__row || y1<0 || y1>=__col || visisted[x1][y1] || grid[x1][y1]==0) continue;
            dfs(grid,x1,y1,__row,__col,visisted);
        }
        return;
    }
    
    int shortestBridge(vector<vector<int>>& grid) {
        
        int __row = grid.size();
        int __col = grid[0].size();
        bool __check = false;
        
        vector<vector<bool>> visisted(__row,vector<bool>(__col,false));
        
        for(int i=0;i<__row;++i){
            for(int j=0;j<__col;++j){
                if(!visisted[i][j] && grid[i][j]==1){
                    dfs(grid,i,j,__row,__col,visisted);
                    __check=true;
                    break;
                }
            }
            if(__check) break;
        }
        
        int dx[] = {0,1,0,-1};
        int dy[] = {1,0,-1,0};

        while(!q.empty()){ 
            int x = q.front().first.first;
            int y = q.front().first.second;
            int dis = q.front().second;
            q.pop();

            for(int i=0;i<4;++i){
                int x1 = x+dx[i];
                int y1 = y+dy[i];

                if(x1<0 || x1>=__row || y1<0 || y1>=__col || visisted[x1][y1]) continue;

                if(grid[x1][y1]==1) return dis;
                else {
                    visisted[x1][y1] = true;
                    q.push({{x1,y1},dis+1});
                }
            }
        }
        return -1;
    }
};