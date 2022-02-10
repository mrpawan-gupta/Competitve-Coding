class Solution
{
public:
    int find(vector<int> &root, int x)
    {
        if (root[x] == -1)
        {
            return x;
        }
        return root[x] = find(root, root[x]);
    }

    void unionSet(vector<int> &root, int x, int y)
    {
        int rootX = find(root, x);
        int rootY = find(root, y);
        if (rootX != rootY)
        {
            root[rootY] = rootX;
        }
    }
    int findCircleNum(vector<vector<int>> &isConnected)
    {
        int n = isConnected.size();
        vector<int> root(n, -1);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (isConnected[i][j] == 1)
                {
                    unionSet(root, i, j);
                }
            }
        }
        int ch = 0;
        for (int i = 0; i < n; i++)
        {
            if (root[i] == -1)
                ch++;
        }
        return ch;
    }
};