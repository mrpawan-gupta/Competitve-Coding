class Solution
{
public:
    int diagonalSum(vector<vector<int>> &mat)
    {
        if (mat.size() == 1)
            return mat[0][0];
        int ans = 0;
        int n = mat.size();

        for (int i = 0; i < n; i++)
        {
            ans += mat[i][i];
            ans += mat[n - i - 1][i];
        }
        if (n & 1)
            ans -= mat[n / 2][n / 2];

        return ans;
    }
};