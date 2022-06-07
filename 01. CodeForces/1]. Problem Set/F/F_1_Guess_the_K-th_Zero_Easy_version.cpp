/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solve(){
          // static long long Tc = 1;
          // cout << "Case #" << Tc << ": "; Tc++;
          int n,t,k;
          cin >> n >> t >>k;
          int l=1,r=n;
          while(l<=r){
            int m = (l+r)/2;
            int ans;
            cout<< "? 1 " << m <<endl;
            cin >> ans;
            if(m-ans>=k){
              r = m-1;
            }
            else {
              l = m+1;
            }
          }
          cout << "! " << l;
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