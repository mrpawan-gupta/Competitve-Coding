class Solution {
public:
    int rearrangeCharacters(string s, string target) {
        const int Max = 26;
        vector<int> count(Max), DP(Max);
        for(char ch: s) count[ch-'a']++;
        for(char ch: target) DP[ch-'a']++;
        int ans = (int)1e9;
        for(int i=0;i<Max;i++){
            if(DP[i] == 0) continue;
            ans = min(ans, count[i]/DP[i]);
        } 
        return ans;
    }
};