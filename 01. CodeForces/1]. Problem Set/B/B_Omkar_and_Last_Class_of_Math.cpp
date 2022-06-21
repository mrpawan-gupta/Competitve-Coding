/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
class Solution{
    public:
        void solve(){
            ll n;
            cin >> n;
            ll x = n;
            for (ll i = 2; i*i <= n; i++) {
              if (n%i == 0) {
	            x = i;
	            break;
              }
            }
            cout << (n/x) << ' ' << (x-1)*(n/x) << endl;
        }
};

int main(int argc, char const *argv[]){

    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin.failbit; cin.badbit;

    int t = 1;
    cin >> t;

    while(t--){
        Solution ob;
        ob.solve();
    }

    return 0;
}