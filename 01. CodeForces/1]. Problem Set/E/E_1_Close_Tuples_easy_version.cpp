/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solve(){
          int n;
          cin >> n;
          vector<long long> cnt(n + 1);
          for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            cnt[x]++;
          }
          long long ans = 0;
          for (int i = 2; i < n; i++) {
            ans += cnt[i - 1] * cnt[i] * cnt[i + 1];
          }
          for (int i = 1; i < n; i++) {
            ans += cnt[i] * (cnt[i] - 1) / 2 * cnt[i + 1];
          }
          for (int i = 2; i <= n; i++) {
            ans += cnt[i - 1] * cnt[i] * (cnt[i] - 1) / 2;
          }
          for (int i = 2; i < n; i++) {
            ans += cnt[i - 1] * cnt[i + 1] * (cnt[i + 1] - 1) / 2;
          }
          for (int i = 2; i < n; i++) {
            ans += cnt[i + 1] * cnt[i - 1] * (cnt[i - 1] - 1) / 2;
          }
          for (int i = 1; i <= n; i++) {
            ans += cnt[i] * (cnt[i] - 1) * (cnt[i] - 2) / 6;
          }
          cout << ans << "\n";
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