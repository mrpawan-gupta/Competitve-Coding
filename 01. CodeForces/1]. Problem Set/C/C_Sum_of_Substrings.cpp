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
            string s;
            cin >> s;
            int ones = 0, p1_first = n, p1_last = -1;
            for (int p = 0; p < n; p++) {
              if (s[p] != '1')
                continue;
              ones += 1;
              if (p1_first == n)
                p1_first = p;
              p1_last = p;
            }
            int add = 0;
            // moving the last one to last position
            if (ones > 0 and (n - 1 - p1_last) <= k) {
              k -= (n - 1 - p1_last);
              add += 1;
              ones -= 1;
            }
            // moving the first one to first position
            if (ones > 0 and p1_first <= k) {
              k -= (p1_first);
              add += 10;
              ones -= 1;
            }
            cout << 11 * ones + add << "\n";
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