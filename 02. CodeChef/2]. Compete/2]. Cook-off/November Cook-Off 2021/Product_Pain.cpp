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

    while(t--){
        ll n;
        cin >> n;

        vll a(n);

        ll ans = 0;

        for(auto &x : a){
            cin >> x;
        }
        for (ll i = 0; i < n; i++){
            for (ll k = i + 2; k < n; k++){
                auto f = [&](int j)
                {
                    return (a[i] - a[j]) * (a[j] - a[k]);
                };
                ll j = upper_bound(a.begin() + i, a.begin() + k, (a[i] + a[k]) / 2) - a.begin();
                j = min(j, k - 1);

                ans += max(f(j), f(j - 1));
            }
        }
        cout << ans << '\n';
    }

    return 0;
}
