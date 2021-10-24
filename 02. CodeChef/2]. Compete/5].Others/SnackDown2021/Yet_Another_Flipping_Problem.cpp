#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<long>;
using vvl = vector<vl>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
const ll mod = 1e9 + 7, inf = 1e18;
#define pb push_back
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);


ll n,k;
void solve(){
    cin>>n>>k;
    if(k==0){
        cout<<"Yes"<<endl;
        cout<<0<<endl;
        return;
    }
    if(k%2==0){
        cout<<"No"<<endl;;
        return;
    }
    ll size=0;
    for(ll i=31;i>=0;i--){
        if(((1<<i)&k)!=0){
            size=i+1;
            break;
        }
    }
    k=(k+(1<<size)-1)/2;
    cout<<"Yes"<<endl;
    cout<<size<<endl;
    int ans=1;
    vector<int> v;
    for(int i=size-2;i>=0;i--){
        if(((1<<i)&k)!=0){
            v.push_back(ans);
            ans+=(1<<i);
        }
        else{
            ans-=(1<<i);
            v.push_back(ans);
        }
    }
    for(int i=size-2;i>=0;i--)
        cout<<v[i]<<endl;
    cout<<ans<<endl;
}

int main(){
    fast;
    ll t;
    cin>>t;
    while(t--){
        solve();
    }
}