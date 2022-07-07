class Solution {
public:
    int candy(vector<int>& r) {
        int n = r.size();
        vector<int> c(n, 1);
        for (int i = 1; i < n; i++)
            if (r[i] > r[i - 1]) c[i] = c[i - 1] + 1;
        for (int i = n - 2; ~i; i--)
            if (r[i] > r[i + 1]) c[i] = max(c[i], c[i + 1] + 1);
        int res = 0;
        for (auto t: c) res += t;
        return res;
    }
};