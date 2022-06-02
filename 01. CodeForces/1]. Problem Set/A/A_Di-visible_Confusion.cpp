/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solve(){
            int n; cin >> n;
            bool ok = true;
            for (int i = 1; i <= n; i++) {
              int x; cin >> x;
              bool found = false;
              for (int j = i + 1; j >= 2; j--) { 
                if (x % j) {
                  found = true;
                  break;
                }
              }
              ok &= found;
            }
            if (ok) {
              cout << "YES\n";
            }
            else {
              cout << "NO\n";
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