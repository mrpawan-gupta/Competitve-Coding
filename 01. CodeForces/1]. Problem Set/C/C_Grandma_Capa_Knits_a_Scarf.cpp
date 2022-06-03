/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solve(){
          string s;
          int n;
          cin >> n >> s;
          int ans = n + 1;
          for (int c = 0; c < 26; ++c) {
              int l = 0, r = n - 1, cnt = 0;
              while (l <= r) {
                  if (s[l] == s[r]) {
                      l++, r--;
                  }
                  else if (s[l] == char('a' + c)) {
                      cnt++, l++;
                  }
                  else if (s[r] == char('a' + c)) {
                      cnt++, r--;
                  }
                  else {
                      cnt = n + 1;
                      break;
                  }
              }
              ans = min(ans, cnt);
          }
          if (ans == n + 1) ans = -1;
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