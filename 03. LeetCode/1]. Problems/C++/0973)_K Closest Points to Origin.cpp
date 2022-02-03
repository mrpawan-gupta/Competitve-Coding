class Solution
{
public:
    vector<vector<int>> kClosest(vector<vector<int>> &points, int k)
    {
        vector<vector<int>> ans;

        multimap<int, vector<int>> dis;
        for (int i = 0; i < points.size(); i++)
        {
            dis.insert(pair<int, vector<int>>(pow(points[i][0], 2) + pow(points[i][1], 2), points[i]));
        }
        int p = 0;
        for (auto it : dis)
        {
            if (p == k)
                return ans;
            ans.push_back(it.second);
            p++;
        }
        return ans;
    }
};