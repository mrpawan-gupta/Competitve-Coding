#include <bits/stdc++.h>
using namespace std;
using ll = long long ;
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
#define fast   ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

vector<ll> v(1e6+1,0);
void ValueCheck(){
    v[1]=1;
    v[2]=2;
    for(ll i=3;i<=1e6;i++){
        v[i]=v[i-1]+i-1;
    }
}
void solve(){
    ll k;
    cin>>k;
    ll pos=lower_bound(v.begin(),v.end(),k+1)-v.begin()-1;
    cout<<2*pos<<endl;
}

int main()
{
    ll t=1;
    ValueCheck();
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}