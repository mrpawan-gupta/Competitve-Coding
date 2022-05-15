class Solution {
public:
    int maxConsecutive(int B, int t, vector<int>& S) {
        sort(S.begin(),S.end());
        S.insert(S.begin(),B-1);
        S.push_back(t+1);
        int res = 0;
        for(int i=1;i<S.size();i++){
           res = max(res,S[i]-S[i-1]-1);
        }
        return res;
    }
};
