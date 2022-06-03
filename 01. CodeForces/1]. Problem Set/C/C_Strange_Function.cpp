/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solve(){
          long long n;
          cin>>n;
          long long x=1,res=n;
          for(int i=2;x<=n;i++){
           res+=n/x;
           x=x*i/__gcd(x,0ll+i);
          }
          cout<<res%(1000000007)<<endl;
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