/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solve(){
          int n; cin >> n;
          int ans[n];
          int cnt = 0;
          for(int i = 1; i <= n/2 ; i++){
            if(n%i==0){
              ans[cnt] = i;
              cnt++;
            }
          }
          ans[cnt] = n;
          cout << cnt+1 << endl;
          for(int i = 0; i <=cnt; i++){
            cout << ans[i] << " ";
          }
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