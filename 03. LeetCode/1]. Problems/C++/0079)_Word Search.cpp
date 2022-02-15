class Solution
{
public:
    bool dfs(int posx, int posy, int rows, int columns, vector<vector<char>> &board, vector<vector<bool>> &visited, string word, int index)
    {
        if (word.size() == index)
        {
            return true;
        }
        visited[posx][posy] = true;
        int dx[] = {1, 0, -1, 0};
        int dy[] = {0, 1, 0, -1};
        bool inti = false;
        for (int k = 0; k < 4; k++)
        {
            if (posx + dx[k] >= 0 && posx + dx[k] < rows && posy + dy[k] >= 0 && posy + dy[k] < columns && visited[posx + dx[k]][posy + dy[k]] == false && board[posx + dx[k]][posy + dy[k]] == word[index])
            {
                inti = inti || dfs(posx + dx[k], posy + dy[k], rows, columns, board, visited, word, index + 1);
            }
        }
        visited[posx][posy] = false;
        return inti;
    }

    bool exist(vector<vector<char>> &board, string word)
    {
        int rows = board.size();
        int columns = board[0].size();

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                if (board[i][j] == word[0])
                {
                    vector<vector<bool>> visited(rows, vector<bool>(columns, false));
                    bool val = dfs(i, j, rows, columns, board, visited, word, 1);
                    if (val)
                        return val;
                }
            }
        }
        return false;
    }
};