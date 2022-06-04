/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

int a[200005];

class Solution{
    public:
        void solve(){
          int n;
		      cin>>n;
		      for (int i=1;i<=n;i++) cin>>a[i];
		      int sum=0,M=-1e9-7,f=1; 
		      for (int i=1;i<=n;i++){
		      	sum+=a[i]; M=max(M,a[i]); 
		      	if (sum-M>0) {cout<<"NO"<<endl; f=0; break;}
		      	if (sum<0) sum=0,M=-1e9-7;
		      }
		      if (!f) return;
		      sum=0,M=-1e9-7;
		      for (int i=n;i>=1;i--){
		      	sum+=a[i]; M=max(M,a[i]); 
		      	if (sum-M>0) {cout<<"NO"<<endl; f=0; break;}
		      	if (sum<0) sum=0,M=-1e9-7;
		      }
		      if (f) cout<<"YES"<<endl;
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