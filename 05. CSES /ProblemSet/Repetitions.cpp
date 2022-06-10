/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solve(){
          string s;
          cin >> s;

          long long cnt = 1;
          long long ans = 1;
          
          for(long long i = 1; i < (long long)s.length(); i++){
            if(s[i] == s[i-1]){ 
              cnt++;
              ans = max(ans,cnt);
            }
            else {
              ans = max(ans,cnt);
              cnt = 1;
            }
          }
          cout << ans;
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