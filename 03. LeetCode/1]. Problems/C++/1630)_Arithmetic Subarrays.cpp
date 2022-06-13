class Solution {
    bool check(vector<int> &v, int l, int r) {
        unordered_map<int, int> m;
        int minN = INT_MAX, maxN = INT_MIN;
        for (int i = l; i <= r; i++) {
            m[v[i]]++;
            minN = min(minN, v[i]);
            maxN = max(maxN, v[i]);
        }
        if (maxN == minN) {  // extreme case
            return true;
        }
        int step = (maxN - minN) / (r - l);
        for (int i = minN; i <= maxN; i += step) {
            if (m[i] != 1) {
                return false;
            }
        }
        return true;
    }
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool> res(l.size());
        for (int i = 0; i < l.size(); i++) {
            res[i] = check(nums, l[i], r[i]);
        }
        return res;
    }
};