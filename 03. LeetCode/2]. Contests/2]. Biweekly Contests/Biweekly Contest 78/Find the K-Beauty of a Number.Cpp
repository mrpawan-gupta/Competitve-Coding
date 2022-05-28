class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);
        int ans = 0;
        for(int i=0;i+k-1< s.size();i++){
            int str = stoi(s.substr(i,k));
            if(str && num%str == 0) ans++;
        }
        return ans;
    }
};