class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> stk;
        
        for(char c : s) {
            if(stk.empty()) {
                stk.push({c, 1});
            } else {
                auto top = stk.top();
                char prev = top.first;
                int streak = top.second;
                if(prev == c) {
                    stk.pop();
                    int newStreak = streak + 1;
                    if(newStreak < k) {
                        stk.push({c, newStreak});
                    }
                } else {
                    stk.push({c, 1});
                }
            }
        }
        
        string ans = "";
        while(!stk.empty()) {
            auto top = stk.top();
            stk.pop();
            char c = top.first;
            int howMany = top.second;
            for(int i = 0; i < howMany; i++) {
                ans += c;
            }
        }
        
        reverse(ans.begin(), ans.end());
        
        return ans;
    }
};