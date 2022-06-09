#include<bits/stdc++.h>
using namespace std;
#define N 1000005
int T,n,m,a[N],b[N],zz,i,vis[N],to[N];
int main(){
	cin>>T;
	while(T--){zz=0;
		cin>>n;
		for(i=1;i<=n;++i)cin>>a[i],vis[i]=0;
		for(i=1;i<=n;++i)cin>>b[i],to[a[i]]=b[i];
		for(i=1;i<=n;++i){
			if(!vis[i]){
				int cc=0;
				while(!vis[i]){
					vis[i]=1,++cc,i=to[i];
				}
				zz+=cc/2;
			}
		}
		long long ans=0;
		for(i=1;i<=zz;++i)ans+=n-i-i+1;
		cout<<ans*2<<"\n";
	}
}