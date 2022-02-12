class Solution
{
public:
    void dfs(vector<vector<char>> &board, int x, int y)
    {
        if (x < 0 || x == board.size() || y < 0 || y == board[0].size() || board[x][y] == 'v' || board[x][y] == 'X')
            return;
        board[x][y] = 'v';
        dfs(board, x + 1, y);
        dfs(board, x - 1, y);
        dfs(board, x, y + 1);
        dfs(board, x, y - 1);
    }

    void solve(vector<vector<char>> &board)
    {
        for (int i = 0; i < board.size(); i++)
        {
            if (board[i][0] == 'O')
            {
                dfs(board, i, 0);
            }
            if (board[i][board[0].size() - 1] == 'O')
            {
                dfs(board, i, board[0].size() - 1);
            }
        }

        for (int i = 0; i < board[0].size(); i++)
        {
            if (board[0][i] == 'O')
            {
                dfs(board, 0, i);
            }
            if (board[board.size() - 1][i] == 'O')
            {
                dfs(board, board.size() - 1, i);
            }
        }

        for (int i = 0; i < board.size(); i++)
        {
            for (int j = 0; j < board[0].size(); j++)
            {
                if (board[i][j] == 'v')
                {
                    board[i][j] = 'O';
                }
                else
                {
                    board[i][j] = 'X';
                }
            }
        }
    }
};