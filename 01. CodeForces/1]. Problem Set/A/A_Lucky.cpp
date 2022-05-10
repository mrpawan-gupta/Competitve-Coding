/*
    Solution By :- Pawan Gupta [ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solve(){
          string s;
          cin >> s;
          int n = s.length();
          int cntF = int(s[0]) + int(s[1]) + int(s[2]);
          int cntB = int(s[n-1]) + int(s[n-2]) + int(s[n-3]);

          if(cntB == cntF){
            cout << "YES" << endl;
          }else{
            cout << "NO" << endl;
          }

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