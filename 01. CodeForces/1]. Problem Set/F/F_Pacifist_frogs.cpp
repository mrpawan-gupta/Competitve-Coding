/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

int n,m,k,ans=0x7fffffff,t,a[101],b[101],c[101],d[101],g[101];
class Solution{
    public:
        void solve(){
            cin >> n >> m >>k;
	        for(int i=1;i<=m;i++) cin>>g[i];
	        for(int i=1;i<=k;i++){
	        	cin>>d[i];
	        	for(int j=1;j<=m;j++) if(d[i]%g[j]==0) a[j]++;
	        }
	        for(int i=1;i<=m;i++) ans=min(ans,a[i]);
	        for(int i=1;i<=m;i++) if(a[i]==ans) t++,b[t]=i;
	        cout<<t<<endl;
	        for(int i=1;i<=t;i++) cout<<b[i]<<" ";
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