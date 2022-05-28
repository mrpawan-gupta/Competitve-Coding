class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<int> DP(n), arr(n), vals(n);
        int m = roads.size();
        for(int i=0;i<m;i++){
            DP[roads[i][0]]++;
            DP[roads[i][1]]++;
        }
        for(int i=0;i<n;i++) arr[i] = i;
        sort(arr.begin(),arr.end(),[&](int i, int j)->bool{
            return DP[i] < DP[j]; 
        });
        for(int i =0;i<n;i++) vals[arr[i]] = i+1;
        long long ans = 0;
        for(int i=0;i<m;i++){
            ans += vals[roads[i][0]];
            ans += vals[roads[i][1]];
        }
        return ans;
    }
};