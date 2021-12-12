#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<long>;
using vll = vector<long long>;
using vvl = vector<vl>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
const ll mod = 1e9 + 7, inf = 1e18;
#define pb push_back
#define pp pop_back
#define mp make_pair
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;

    int t;
    cin >> t;
    while (t--){
    
        ll n;
        cin >> n;
        ll v[n];
        for(int i=0; i<n; i++) {
            cin >> v[i];
        }
        vll x(n + 1);
        for(int i=0; i<n; i++){
            if (i % 2){
                x[i + 1] = x[i] - v[i];
            }
            else{
                x[i + 1] = x[i] + v[i];
            }
        }
        ll ans = x[n];
        if (n % 2){
            for(int i=0; i<n; i++){
                ll l = x[i];
                ll r = x[n] - x[i + 1];
                ans = max(ans, l - r + v[i]);
            }
        }
        else{
            for(int i=0; i<n; i++){
                ll l = x[i];
                ll r = x[n] - x[i + 1];
                ans = max(ans, l - r - v[i]);
            }
        }
        cout << ans << endl;
    }

    return 0;
}
