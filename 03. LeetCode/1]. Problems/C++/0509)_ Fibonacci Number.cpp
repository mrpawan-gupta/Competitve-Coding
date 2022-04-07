class Solution{
public:
    int dp[35];
    int fib(int n){
        if (n == 0)
            return 0;
        if (n == 1)
            return 1;
        if (dp[n] != 0)
            return dp[n];

        return dp[n] = ((n - 2 >= 0) ? (fib(n - 1) + fib(n - 2)) : 0);
    }
};