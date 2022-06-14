/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;
int g[17][100005],b[100005],ptr,l[100005],r[100005];
map<int,vector<int> > at;
int rgq(int l,int r){
    int k=log2(r-l+1);
    return __gcd(g[k][l],g[k][r-(1<<k)+1]);
}
class Solution{
    public:
        void solve(){
            int n,q;
            scanf("%d",&n);
            for(int i=1;i<=n;++i)
                scanf("%d",&g[0][i]),
                at[g[0][i]].push_back(i);
            for(int j=1;j<17;++j)
                for(int i=1;i<=n;++i){
                    g[j][i]=g[j-1][i];
                    if(i+(1<<(j-1))<=n)
                        g[j][i]=__gcd(g[j-1][i],g[j-1][i+(1<<(j-1))]);
                }   
            scanf("%d",&q);
            for(int i=0;i<q;++i){
                int l,r;
                scanf("%d%d",&l,&r);
                int g=rgq(l,r);
                printf("%ld\n", r-l+1-(upper_bound(at[g].begin(),at[g].end(),r)-upper_bound(at[g].begin(),at[g].end(),l-1)));
            }
        }
};

int main(int argc, char const *argv[]){

    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin.failbit; cin.badbit;

    int t = 1;
    //cin >> t;

    while(t--){
        Solution ob;
        ob.solve();
    }

    return 0;
}