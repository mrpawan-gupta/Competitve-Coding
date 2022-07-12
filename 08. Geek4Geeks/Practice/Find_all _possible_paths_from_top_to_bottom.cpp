#include <bits/stdc++.h>
using namespace std;


class Solution{
public:
    vector<vector<int>> ans;
    void paths(int i, int j, int n, int m, vector<vector<int>> &v, vector<int> &curr) {
        if(i == n-1 && j == m-1) {
            curr.push_back(v[i][j]); //push last element
            ans.push_back(curr); //push curr to ans
            curr.pop_back(); //pop last element
            return;
        }
        curr.push_back(v[i][j]);
        if(i+1 < n){
            paths(i+1,j,n,m,v,curr);
        }
        if(j+1 < m) {
            paths(i,j+1,n,m,v,curr);
        }
        curr.pop_back();
    }

    vector<vector<int>> findAllPossiblePaths(int n, int m, vector<vector<int>> &grid){   
        vector<int> curr;
        paths(0,0,grid.size(), grid[0].size(),grid,curr);
        return ans;
    }
};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }
        Solution ob;
        auto ans = ob.findAllPossiblePaths(n, m, grid);
        for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < ans[i].size(); j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
