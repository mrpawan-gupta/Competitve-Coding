/*
     filename: A_The_Enchanted_Forest.cpp
     @author: Pawan Gupta [ CodeForces - Mr.pawan_gupta Leetcode - mrpawan-gupta]
     createdAt: 2022-07-15 13:21:55
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void __solve(){
            int n, k;
            cin >> n >> k;
            vector<int> a(n);
            for (int j = 0; j < n; j++){
              cin >> a[j];
            }
            if (k <= n){
              vector<long long> S(n + 1);
              S[0] = 0;
              for (int j = 0; j < n; j++){
                S[j + 1] = S[j] + a[j];
              }
              long long ans = 0;
              for (int j = 0; j <= n - k; j++){
                long long sum = S[j + k] - S[j];
                sum += (long long) k * (k - 1) / 2;
                ans = max(ans, sum);
              }
              cout << ans << endl;
            } else {
              long long ans = 0;
              for (int j = 0; j < n; j++){
                ans += a[j];
                ans += k - j - 1;
              }
              cout << ans << endl;
            }
        }
};

int main(int argc, char const *argv[]){

    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin.failbit; cin.badbit;

    int __test = 1;
    cin >> __test;

    while(__test--){
        Solution __ob;
        __ob.__solve();
    }

    return 0;
}