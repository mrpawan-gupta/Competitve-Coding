class Solution
{
public:
    int x = 1;
    void spiralOrder(vector<vector<int>> &ans, int n)
    {
        int top = 0;
        int down = n - 1;
        int left = 0;
        int right = n - 1;
        int dir = 0;
        while (top <= down and left <= right)
        {
            if (dir == 0)
            {
                for (int i = left; i <= right; i++)
                {
                    ans[top][i] = x;
                    x++;
                }
                top++;
            }
            else if (dir == 1)
            {
                for (int i = top; i <= down; i++)
                {
                    ans[i][right] = x;
                    x++;
                }
                right--;
            }
            else if (dir == 2)
            {
                for (int i = right; i >= left; i--)
                {
                    ans[down][i] = x;
                    x++;
                }
                down--;
            }
            else if (dir == 3)
            {
                for (int i = down; i >= top; i--)
                {
                    ans[i][left] = x;
                    x++;
                }
                left++;
            }
            dir = (dir + 1) % 4;
        }
    }

    vector<vector<int>> generateMatrix(int n)
    {
        vector<vector<int>> ans(n, vector<int>(n, 0));
        spiralOrder(ans, n);
        return ans;
    }
};
