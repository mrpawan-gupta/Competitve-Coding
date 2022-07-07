class Solution{
public:
    bool DFS(vector<vector<int>> &graph, vector<int> &dp, int src){
        if (dp[src])
            return 1 == dp[src];

        dp[src] = -1;
        for (auto node : graph[src])
            if (false == DFS(graph, dp, node))
                return false;
        return dp[src] = 1; 
    }
    vector<int> eventualSafeNodes(vector<vector<int>> &graph){
        int total_nodes = graph.size();
        vector<int> result, dp(total_nodes, 0);
        for (int i = 0; i < total_nodes; i++)
            if (DFS(graph, dp, i))
                result.push_back(i);

        return result;
    }
};