class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> v(128, -1); 
        int ans = 0;
        int start = 0;
        int i = 0;
        for (; i < s.length(); i++) {
            if (v[s[i]] < start) { 
                v[s[i]] = i;  
            } else { 
                ans = max(i - start, ans);
                start = v[s[i]] + 1; 
                v[s[i]] = i; 
            }
        }
        ans = max(ans, i - start); 
        return ans;
    }
};