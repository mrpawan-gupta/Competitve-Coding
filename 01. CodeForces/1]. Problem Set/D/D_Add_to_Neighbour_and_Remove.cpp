/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;

class Solution{
    public:
        void solve(){
            int n;
            cin >> n;
            vector<ll> a(n);
            ll sum = 0;
            for (ll &x : a) {
              cin >> x;
              sum += x;
            }

            for (int i = n; i >= 1; i--) {
              if (sum % i == 0) {
                ll needSum = sum / i;
                ll curSum = 0;
                bool ok = true;
                for (int j = 0; j < n; j++) {
                  curSum += a[j];
                  if (curSum > needSum) {
                    ok = false;
                    break;
                  } else if (curSum == needSum) {
                    curSum = 0;
                  }
                }

                if (ok) {
                  cout << n - i << endl;
                  return;
                }
              }
            }
        }
};          

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--){
        Solution ob;
        ob.solve();
    }

    return 0;
}