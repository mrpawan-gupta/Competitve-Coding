class Solution
{
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>> &edges)
    {

        vector<int> inDegree(n, 0);

        for (auto edge : edges)
        {
            inDegree[edge[1]]++;
        }

        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            if (inDegree[i] == 0)
                ans.push_back(i);
        }

        return ans;
    }
};