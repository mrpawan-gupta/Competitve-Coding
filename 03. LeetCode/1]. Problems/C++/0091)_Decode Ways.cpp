class Solution{
public:
    int dp[101];
    int solve(string s, int i){
        if (s[i] == '0')
            return 0;
        if (i == s.size() || i == s.size() - 1)
            return 1;
        if (dp[i] != -1)
            return dp[i];
        string c = s.substr(i, 2);
        int c1 = solve(s, i + 1);
        int c2 = (stoi(c) >= 1 && stoi(c) <= 26) ? solve(s, i + 2) : 0;
        return dp[i] = c1 + c2;
    }
    int numDecodings(string s){
        memset(dp, -1, sizeof(dp));
        return solve(s, 0);
    }
};