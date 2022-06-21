/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solve(){
            int n, k;
            cin >> n >> k;
            string s(n, 'a');
            for (int i = n - 2; i >= 0; i--) {
                if (k <= (n - i - 1)) {
                    s[i] = 'b';
                    s[n - k] = 'b';
                    cout << s << endl;
                    break;
                }
                k -= (n - i - 1);
            }
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