/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solve(){
          int n; cin >> n;
          for(int i = 1; i <= n; i++){
            if((i&1)){
              for(int j = 1; j < 6; j++){
                cout << (5*(i-1))+j <<" ";
              }
            }else{
              for(int j = 0; j < 5; j++){
                cout << 5*(i)-j << " ";
              }
            }
            cout << '\n';
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