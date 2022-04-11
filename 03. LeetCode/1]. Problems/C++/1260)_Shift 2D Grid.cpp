class Solution{
    int m, n;
    void reverse(vector<vector<int>> &grid, int l, int r){
        while (l < r){
            int lr = l / n, lc = l % n;
            int rr = r / n, rc = r % n;
            if (rr == m)
                rr = 0;
            swap(grid[lr][lc], grid[rr][rc]);
            l++;
            r--;
        }
    }

public:
    vector<vector<int>> shiftGrid(vector<vector<int>> &grid, int k)
    {
        m = grid.size(), n = grid[0].size();
        k = k % (m * n);
        if (k == 0)
            return grid;
        reverse(grid, 0, m * n - 1);
        reverse(grid, 0, k - 1);
        reverse(grid, k, m * n - 1);
        return grid;
    }
};