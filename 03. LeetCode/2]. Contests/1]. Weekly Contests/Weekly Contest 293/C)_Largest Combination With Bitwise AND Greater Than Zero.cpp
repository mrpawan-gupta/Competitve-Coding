class Solution {
public:
    int largestCombination(vector<int>& a) {
        int bitcnt[32] = { 0 };
        for (int i = 0; i < a.size(); i++) {
        int setBit = 31;
        while (a[i] > 0) {
            if ((a[i] & 1) == 1) {
                bitcnt[setBit]++;
            }
            a[i] = a[i] >> 1;
            setBit--;
        }
    }
    int ans = *max_element(bitcnt , bitcnt+32);
 
    return ans;
    }
};