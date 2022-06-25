class Solution {
public:
    void Helper(vector<vector<int>> &v,int i,int j,bool &b){
        if(i==0 || i==v.size()-1 || j==0 || j==v[0].size()-1){
            b=1;
            v[i][j]=-1;
            // return;
        }
        v[i][j]=-1;
        if(i-1>=0 && v[i-1][j]==0){
            Helper(v,i-1,j,b);
        }
        if(i+1<v.size() && v[i+1][j]==0){
            Helper(v,i+1,j,b);
        }
        if(j-1>=0 && v[i][j-1]==0){
            Helper(v,i,j-1,b);
        }
        if(j+1<v[0].size() && v[i][j+1]==0){
            Helper(v,i,j+1,b);
        }
    }
    int closedIsland(vector<vector<int>>& grid) {
        int res=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==0){
                bool b=0;
                Helper(grid,i,j,b);
                if(b==0){
                    res++;
                }
                }
            }
        }
        return res;
    }
};