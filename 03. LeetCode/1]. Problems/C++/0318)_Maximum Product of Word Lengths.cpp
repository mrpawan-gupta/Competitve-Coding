class Solution {
public:
    int maxProduct(vector<string>& words) {
        int n = words.size();
        vector<int> mask(n, 0);
        for(int i=0;i<n;++i) {
            int w_bin=0;
            for(int j=0;j<words[i].size();++j) {
                w_bin |= 1 << (words[i][j]-'a');
            }
            mask[i] = w_bin;
        }
        int res=0;
        for(int i=0;i<n-1;i++) {
            for(int j=i+1;j<n;j++) {
                if((mask[i]&mask[j])==0) {
                    int prod = words[i].size()*words[j].size();
                    res = max(res, prod);
                }
            }
        }
        
        return res;
    }
};