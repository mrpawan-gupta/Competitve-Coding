/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solve(){
          int n;
          cin >> n;
          vector<int> a(n), b(n), cntA(n + 1), cntB(n + 1);
          for (int i = 0; i < n; ++i) {
            cin >> a[i] >> b[i];
            cntA[a[i]]++; cntB[b[i]]++;
          }
          long long ans = n * 1LL * (n - 1) * (n - 2) / 6;
          for (int i = 0; i < n; ++i) 
            ans -= (cntA[a[i]] - 1) * 1LL * (cntB[b[i]] - 1);
          cout << ans << '\n';
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