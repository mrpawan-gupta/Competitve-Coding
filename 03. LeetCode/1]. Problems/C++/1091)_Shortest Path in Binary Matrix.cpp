class Solution
{
public:
    vector<vector<bool>> visited;
    vector<int> dir = {-1, 0, 1, 0, -1, -1, 1, 1, -1};
    int shortestPathBinaryMatrix(vector<vector<int>> &grid)
    {
        queue<pair<int, int>> q;
        int m = grid.size();
        int n = grid[0].size();
        visited.resize(m, vector<bool>(n, false));

        if (grid[0][0] || grid[m - 1][n - 1])
            return -1;

        q.emplace(0, 0);
        visited[0][0] = true;
        int step = 0;
        while (!q.empty())
        {
            ++step;
            int k = q.size();
            for (int j = 0; j < k; ++j)
            {
                auto cur = q.front();
                q.pop();
                if (cur.first == m - 1 && cur.second == n - 1)
                    return step;

                for (int i = 0; i < 8; ++i)
                {
                    int r = cur.first + dir[i];
                    int c = cur.second + dir[i + 1];
                    if (r >= 0 && r < m && c >= 0 && c < n &&
                        !grid[r][c] && !visited[r][c])
                    {
                        q.emplace(r, c);
                        visited[r][c] = true;
                    }
                }
            }
        }
        return -1;
    }
};