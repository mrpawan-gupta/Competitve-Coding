class Solution
{
    bool dfs(int src, vector<vector<int>> rooms, vector<int> &vis, vector<int> &temp)
    {
        vis[src] = 1;
        temp.push_back(src);
        if (temp.size() == rooms.size())
            return true;
        for (auto i : rooms[src])
        {
            if (vis[i] == 0)
            {
                if (dfs(i, rooms, vis, temp))
                    return true;
            }
        }
        return false;
    }

public:
    bool canVisitAllRooms(vector<vector<int>> &rooms)
    {
        int n = rooms.size();
        vector<int> temp;
        vector<int> vis(n, 0);
        if (dfs(0, rooms, vis, temp))
            return true;
        return false;
    }
};