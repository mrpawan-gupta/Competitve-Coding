/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void __solve(){
            int n, m;
            cin >> n >> m;
            vector<int> k(n);
            for (int i = 0; i < n; i++) {
              cin >> k[i];
            }
            sort(k.begin(), k.end());
            vector<int> c(m);
            for (int i = 0; i < m; i++) {
              cin >> c[i];
            }
            int low = 0, high = min(n, m);
            while (low < high) {
              int mid = (low + high + 1) >> 1;
              bool ok = true;
              for (int i = 0; i < mid; i++) {
                if (k[n - mid + i] <= i) {
                  ok = false;
                  break;
                }
              }
              if (ok) {
                low = mid;
              } else {
                high = mid - 1;
              }
            }
            long long ans = 0;
            for (int i = 0; i < n; i++) {
              ans += c[k[i] - 1];
            }
            long long best = ans;
            for (int i = 1; i <= low; i++) {
              ans -= c[k[n - i] - 1];
              ans += c[i - 1];
              best = min(best, ans);
            }
            cout << best << '\n';
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