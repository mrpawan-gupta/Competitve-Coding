bool equal(string str1, string str2){
    sort(str1.begin(),str1.end());
    sort(str2.begin(),str2.end());
    return str1==str2;
}

class Solution {
public:
    vector<string> removeAnagrams(vector<string>& W) {
        reverse(W.begin(),W.end());
        vector<string> result;
        for(string s: W){
            if(result.size() && equal(result.back(),s)) result.pop_back();
            result.push_back(s);
        }
        reverse(result.begin(),result.end());
        return result;
    }
};