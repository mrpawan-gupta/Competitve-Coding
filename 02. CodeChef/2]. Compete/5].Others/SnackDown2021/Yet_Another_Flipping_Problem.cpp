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

int main(){
    fast;

    cin>>n>>k;
    if(k==0){
        cout<<"Yes"<<endl;
        cout<<0<<endl;
        
    }
    if(k%2==0){
        cout<<"No"<<endl;;

    }
    ll sz=0;
    for(ll i=31;i>=0;i--){
        if(((1<<i)&k)!=0){
            sz=i+1;
            break;
        }
    }
    k=(k+(1<<sz)-1)/2;
    cout<<"Yes"<<endl;
    cout<<sz<<endl;
    int ans=1;
    vector<int> a;
    for(int i=sz-2;i>=0;i--){
        if(((1<<i)&k)!=0){
            a.push_back(ans);
            ans+=(1<<i);
        }
        else{
            ans-=(1<<i);
            a.push_back(ans);
        }
    }
    for(int i=sz-2;i>=0;i--)
        cout<<a[i]<<endl;
    cout<<ans<<endl;

    return 0;
}
