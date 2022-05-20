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
          int a[n];
          for(int i = 0; i < n; i++){
            cin >> a[i];
          }
          for (int i = 0; i < n; i++){
            if(a[i]==k){
              cout << 1 << endl;
              return;
            }
          }
          cout << -1 << endl;
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