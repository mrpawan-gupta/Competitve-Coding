class Solution {
public:
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        for (int i=0 ; i<m ; i++) 
            for (int j=1 ; j<n ; j++)
                matrix[i][j] += matrix[i][j-1];

        unordered_map<int,int> cnt;
        int ans = 0;
        for (int i=0 ; i<n ; i++) {
            for (int j=i ; j<n ; j++) {
                cnt.clear();
                int sum=0;
                cnt[sum] = 1;
                for (int k=0 ; k<m ; k++) {
                    sum += matrix[k][j] - (i>0 ? matrix[k][i-1] : 0);
                    if (cnt[sum-target] > 0)
                        ans += cnt[sum-target];
                    cnt[sum] ++;
                }
            }
        }
        return ans;
    }
};