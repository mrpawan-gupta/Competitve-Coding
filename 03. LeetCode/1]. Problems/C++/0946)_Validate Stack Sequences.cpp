class Solution
{
public:
    bool validateStackSequences(vector<int> &pushed, vector<int> &popped)
    {
        int n = pushed.size(), top = -1, j = 0;
        for (int i = 0; i < n; i++)
        {
            while (top >= 0 and j < n and pushed[top] == popped[j])
            {
                top--;
                j++;
            }
            pushed[++top] = pushed[i];
        }
        while (top >= 0 and j < n and pushed[top] == popped[j])
        {
            top--;
            j++;
        }
        return top == -1;
    }
};