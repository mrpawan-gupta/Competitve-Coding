class Solution {
public:
    bool digitCount(string num) {
        map<int,int> freq;
        int n = num.size();
        for(int i=0;i<n;i++) freq[num[i]-'0']++;
        for(int i=0;i<n;i++){
            if(freq[i] != num[i]-'0') return false;
        }
        return true;
    }
};