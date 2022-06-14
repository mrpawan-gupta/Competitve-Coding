#include <bits/stdc++.h>
#define rint register int
using namespace std;
typedef long long ll;
const int maxn=1e6+5;
int n,q,a[maxn],bel[maxn],vis[maxn];
ll ans,Ans[maxn];
struct Data{
	int l,r,id;
}b[maxn];
bool comp(Data A,Data B) {
	return bel[A.l]!=bel[B.l]?A.l<B.l:bel[A.l]&1?A.r<B.r:A.r>B.r;
}
void Add(int x) {
	ans+=(ll)(vis[a[x]]*2+1)*a[x];
	vis[a[x]]++;
}
void Del(int x) {
	ans-=(ll)(vis[a[x]]*2-1)*a[x];
	vis[a[x]]--;
}
int main() {
	scanf("%d%d",&n,&q);
	int block=sqrt(n);
	for(int i=1;i<=n;++i) scanf("%d",&a[i]),bel[i]=(i-1)/block+1;
	for(int i=1;i<=q;++i) scanf("%d%d",&b[i].l,&b[i].r),b[i].id=i;
	sort(b+1,b+1+q,comp);
	int l=1,r=0;
	for(int i=1;i<=q;++i) {
		while(l>b[i].l) Add(--l);
		while(r<b[i].r) Add(++r);
		while(l<b[i].l) Del(l++);
		while(r>b[i].r) Del(r--);
		Ans[b[i].id]=ans;
	}
	for(int i=1;i<=q;++i) printf("%lld\n",Ans[i]);
	return 0;
}