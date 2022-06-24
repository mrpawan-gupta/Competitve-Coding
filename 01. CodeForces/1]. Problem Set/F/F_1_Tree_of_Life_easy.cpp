/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solve(){
            int a[10001], n, x, y, rep = 0, i = 0;
            memset(a, 0, sizeof(a));
            for (std::cin >> n; i < n - 1; i++) {
                std::cin >> x >> y;
                a[x]++;
                a[y]++;
            }
            for (i = 1; i <= n; i++)
                rep += a[i] * (a[i] - 1) / 2;
            std::cout << rep;
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
