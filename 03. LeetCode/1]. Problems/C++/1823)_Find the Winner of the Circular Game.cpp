class Solution
{
public:
    int jos(int n, int k)
    {
        if (n == 0)
            return 0;
        else
            return (jos(n - 1, k) + k) % n;
    }

    int findTheWinner(int n, int k)
    {
        return jos(n, k) + 1;
    }
};