class Solution {
public:
    int countVowelStrings(int n) {
        
        string vowels = "aeiou";
        int ans;
        
        vector<int> dp(26, 0);
        
        dp['a' - 97] = 1;
        dp['e' - 97] = 1;
        dp['i' - 97] = 1;
        dp['o' - 97] = 1;
        dp['u' - 97] = 1;
        
        for(int i = 2; i <= n ; i++){
            for(int j = 0; j < 5; j++){
                for(int k = j + 1; k < 5; k++){
                    dp[vowels[j] - 97] += dp[vowels[k] - 97];
                }  
            }
        }
        ans = accumulate(dp.begin(), dp.end(), 0);
        return ans;
    }
};