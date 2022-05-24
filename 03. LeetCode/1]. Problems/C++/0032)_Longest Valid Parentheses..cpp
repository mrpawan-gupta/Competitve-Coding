class Solution {
public:
    int longestValidParentheses(string s) {
        int open=0,close=0, res=0;
        for(auto ch:s){
            if(ch=='(') open++;
            else close++;
            if(open==close) res=max(res,open+close);
            else if(close>open) open=close=0;
        }
        open=close=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='(') open++;
            else close++;
            if(open==close) res=max(res,open+close);
            else if(open>close) open=close=0;
        }
        return res;
    }
};