/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solve(){
          int n, m;
          cin>>n>>m;
          int d=abs(n-m)/2;
          cout<<1+(n+m-2*d)/((n+m)%2==0?2:1)<<endl;
          for(int i=d;i<=n+m-d;i+=(n+m)%2==0?2:1)
            cout<<i<<" ";
          cout<<endl;
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