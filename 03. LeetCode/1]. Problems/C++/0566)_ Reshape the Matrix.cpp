class Solution
{
public:
    vector<vector<int>> matrixReshape(vector<vector<int>> &mat, int r, int c)
    {
        int rows = mat.size();
        int cols = mat[0].size();
        int no_of_ele = rows * cols;
        if (no_of_ele > r * c || no_of_ele < r * c)
            return mat;
        vector<vector<int>> t(r, vector<int>(c));
        for (int i = 0; i < r * c; i++)
        {
            t[i / c][i % c] = mat[i / cols][i % cols];
        }
        return t;
    }
};