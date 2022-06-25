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
            n = n % 360;
            n += 360;
            n %= 360;
            if (n >= 360 - 45) n = 0;
            long long ans = (n - 45 + 89) / 90;
            if (n == 4) n = 0;
            cout << ans << endl;
        }
};

int main(int argc, char const *argv[]){

    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin.failbit; cin.badbit;

    int t = 1;
    //cin >> t;

    while(t--){
        Solution ob;
        ob.solve();
    }

    return 0;
}