/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

template <typename T> void print(T &&t) { 
  cout << t << '\n'; 
}

class Solution{
    public:
        void solve(){
          int na, nb;
          cin >> na >> nb;

          int a, b; 
          cin >> a >> b; 

          int ma = max(nb,na);
          int mb = max(b,a);

          if(ma < mb) print("P");
          else if(ma>mb)print("Q");
          else print("TIE");
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