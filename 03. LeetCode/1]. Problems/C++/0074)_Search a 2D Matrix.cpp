class Solution
{
public:
    bool searchMatrix(vector<vector<int>> &matrix, int target)
    {
        int id = 0, m = matrix.size(), n = matrix[0].size();
        while (id < m)
        {
            if (target >= matrix[id][0] && target <= matrix[id][n - 1])
                break;
            id++;
        }
        if (id == m)
            return false;
        return binary_search(matrix[id].begin(), matrix[id].end(), target);
    }
};