class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int res=0;
        for(auto num :nums) {
            res+=(int)log10(num)&1;
        }
        return res;
    }
};