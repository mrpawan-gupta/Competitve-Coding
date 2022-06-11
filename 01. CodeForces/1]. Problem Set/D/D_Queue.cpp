/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

int p[100005];

class Solution{
    public:
        void solve(){
            int n;
            cin >> n;
            for (int i = 0; i < n; i++) {
              cin >> p[i];
            }
            sort(p, p + n);
            long long sum = p[0], ans = 0;
            for (int i = 1; i < n; i++) {
              if (sum <= p[i]) {
                sum += p[i];
                ans++;
              }
            }
            cout << ans + 1 << endl;
        }
};

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while(t--){
        Solution ob;
        ob.solve();
    }

    return 0;
}