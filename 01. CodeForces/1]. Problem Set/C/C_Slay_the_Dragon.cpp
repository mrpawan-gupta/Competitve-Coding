/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solve(){
            long long n;
            cin >> n;
            vector<long long> a(n);
            for (auto &x : a) cin >> x;
            sort(a.begin(), a.end());
            long long sum = accumulate(a.begin(), a.end(), 0LL);
            long long m;
            cin >> m;
            while (m--) {
              long long x, y;
              cin >> x >> y;
              long long i = lower_bound(a.begin(), a.end(), x) - a.begin();
              long long ans = 2e18;
              if (i > 0) ans = min(ans, (x - a[i - 1]) + max(0LL, y - sum + a[i - 1]));
              if (i < n) ans = min(ans, max(0LL, y - sum + a[i]));
              cout << ans << '\n';
            }
        }
};

int main(int argc, char const *argv[]){

    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin.failbit; cin.badbit;

    long long t = 1;
    //cin >> t;

    while(t--){
        Solution ob;
        ob.solve();
    }

    return 0;
}