#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
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

int main(){
    fast;

    int t;
    cin >> t;

    while(t--) {
        ll x;
        cin >> x;
        ll d;
        cin >> d;
        vector<ll> v;

        ll current = x;

        for(ll i = 0 ; i < 4 ; i++) {
            ll min = i+1;
            if(current&1) {
                current+=min;
            } else {
                current-=min;
            }
            v.push_back(current);
        }

        ll idx = d%4;

        if(idx==2 or idx==0) {
            if(idx==0)
                idx+=4;
            cout << v[idx-1] << '\n';
        } 
        else {
            if(idx==1) {
                d--;
                ll flag = d/4.0;
                if(x&1) {
                    cout << v[idx-1]+flag*4 << '\n';
                } else {
                    cout << v[idx-1]-flag*4 << '\n';
                }
            } else {
                d--;
                ll flag = d/4.0;

                if(x&1) {
                    cout << v[idx-1]-flag*4 << '\n';
                } else {
                    cout << v[idx-1]+flag*4 << '\n';
                }
            }
        }
    }

    return 0;
}
