/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solve(){
            double a, b, c; cin >> a >> b >> c;
            b *= -1;
            double one = b + sqrt(b * b - 4 * a * c);
            double two = b - sqrt(b * b - 4 * a * c);
            one /= 2*a; two /= 2*a;
            cout << setprecision(15) << max(one, two) << '\n' << min(one, two);
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