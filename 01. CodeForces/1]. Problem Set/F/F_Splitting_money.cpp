/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;
int arr[200005];
class Solution{
    public:
        void solve(){
          long long n,x,f,ans=0;
          cin>>n;
          for(int i = 0;i < n; i++){
            cin >> arr[i];
          }
          cin >> x >> f;
          for(int i=0;i<n;i++){
            ans+=(arr[i]+f-1)/(x+f)*f;
          }
          cout<<ans;
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