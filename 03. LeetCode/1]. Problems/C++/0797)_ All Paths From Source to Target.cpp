class Solution
{
public:
    void solve(vector<vector<int>> &graph, vector<vector<int>> &ans, vector<int> output, int index)
    {
        output.push_back(index);
        if (index == graph.size() - 1)
        {
            ans.push_back(output);
            return;
        }
        for (int i = 0; i < graph[index].size(); i++)
        {
            solve(graph, ans, output, graph[index][i]);
        }
    }

    vector<vector<int>> allPathsSourceTarget(vector<vector<int>> &graph)
    {
        vector<vector<int>> ans;
        vector<int> output;
        solve(graph, ans, output, 0);
        return ans;
    }
};