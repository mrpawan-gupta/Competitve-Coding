/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

long long f(vector<long long> &nums){
    if(nums.size()<2) return 0ll;
    long long ans=-1,sm;
    for(int i=0;i<nums.size();i++){
        sm=0;
        for(int j=0;j<nums.size();j++){
            sm+=abs(nums[i]-nums[j]);
        }
        if(ans==-1 || sm<ans) ans=sm;
    }
    return ans;
}

class Solution{
public:
    void __solve(){
        int n, m;
        cin >> n >> m;
        long long ans = 0;
        vector<vector<long long>> g(n, vector<long long>(m, 0));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> g[i][j];
        for (int i = 0, l, r, u, d; i < n; i++)
            for (int j = 0; j < m; j++){
                if (i <= n - 1 - i && j <= m - 1 - j){
                    r = -1;
                    d = -1;
                    if (i < n - 1 - i)
                        r = n - 1 - i;
                    if (j < m - 1 - j)
                        d = m - 1 - j;
                    vector<long long> nums;
                    if (r >= 0)
                        nums.push_back(g[r][j]);
                    if (d >= 0)
                        nums.push_back(g[i][d]);
                    if (r >= 0 && d >= 0)
                        nums.push_back(g[r][d]);
                    nums.push_back(g[i][j]);
                    ans += f(nums);
                }
            }
        cout << ans << "\n";
    }
};

int main(int argc, char const *argv[]){

    ios::sync_with_stdio(false);cin.tie(NULL);
    cout.tie(NULL);cin.failbit;cin.badbit;

    int __test = 1;
    cin >> __test;

    while (__test--){
        Solution __ob;
        __ob.__solve();
    }

    return 0;
}