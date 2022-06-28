/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void __solve(){
            int n;
            cin >> n;
            int a[n];
            int Max = 0;
            for (int i = 0; i < n; i++) {
                cin >> a[i];
                Max = (a[i] > a[Max] ? i : Max);
            }
            vector<int> DP(n);
            DP[0] = a[Max]; a[Max] = 0;
            int cg = DP[0];
            for (int i = 1; i < n; i++) {
                int ci = 0, cans = 0;
                for (int j = 0; j < n; j++)
                    if (a[j] && __gcd(a[j], cg) > cans) {
                        cans = __gcd(a[j], cg);
                        ci = j;
                    }
                DP[i] = a[ci];
                cg = cans;
                a[ci] = 0;
            }
            for (int i = 0; i < n; i++)
                cout << DP[i] << ' ';
            cout << '\n';
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