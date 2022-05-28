class Solution {
public:
    int split(string &s){
        int W = 1;
        for(char ch: s){
            W += ch == ' '; 
        }
        return W;
    }
    
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        map<string,int> count;
        int n = messages.size();
        for(int i=0;i<n;i++){
            count[senders[i]] += split(messages[i]);
        }
        string ans;
        int Max = 0;
        for(auto [s, k]: count){
            if(k >= Max){
                Max = k;
                ans = max(ans, s);
            }
        }
        return ans;
    }
};