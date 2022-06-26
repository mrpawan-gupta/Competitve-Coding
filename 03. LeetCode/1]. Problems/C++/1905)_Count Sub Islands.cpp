class Solution {
public:
    int countSubIslands(vector<vector<int>>& grid1, vector<vector<int>>& grid2) {
        int m = grid1.size();
        int n = grid1[0].size();
        p = vector<int>(m * n + 1);
        cnt = m * n;
        rank = vector<int>(m * n + 1, 1);
        iota(p.begin(), p.end(), 0);
        vector<pair<int,int>> dxy = {{0, 1}, {1, 0}};
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid2[i][j] == 0) {
                    cnt--;
                    continue;
                } 
                int a = i * n + j;
                for (int k = 0; k < dxy.size(); k++) {
                    int x = i + dxy[k].first, y = j + dxy[k].second;
                    if (x >= m || y >= n) continue;
                    if (grid2[x][y] == 0) continue;
                    int b = x * n + y;
                    comb(a, b);
                }
            }
        }
        unordered_set<int> visSet;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid2[i][j] == 0) continue;
                int root = find(i * n + j);
                if (grid1[i][j] == 0) {
                    visSet.insert(root);
                }
            }
        }
        return cnt - visSet.size();
    }
private:
    vector<int> adj;
    vector<int> rank;
    int cnt = 0;;
    void comb(int a, int b) {
        int root_A = find(a);
        int root_B = find(b);
        if (root_A == root_B) return;
        cnt--;
        if (rank[root_A] > rank[root_B]) {
            adj[root_B] = root_A;
            rank[root_A] += rank[root_B];
        } else {
            adj[root_A] = root_B;
            rank[root_B] += rank[root_A];
        }
        return;
    }
    int find(int a) {
        if (adj[a] != a) {
            adj[a] = find(adj[a]);
        }
        return adj[a];
    }
    
};