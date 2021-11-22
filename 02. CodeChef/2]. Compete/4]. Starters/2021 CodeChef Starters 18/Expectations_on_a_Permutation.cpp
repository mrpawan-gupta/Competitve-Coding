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

ll _sub(ll x, ll y)
{
    x %= mod, y %= mod;
    return (x - y + mod) % mod;
}
ll _mul(ll x, ll y)
{
    x %= mod, y %= mod;
    return (x * 1ll * y) % mod;
}
ll _pow(ll x, ll y)
{
    if (y == 0)
        return 1;
    else if (y % 2 == 0)
    {
        ll _tmp = _pow(x, y / 2);
        return _mul(_tmp, _tmp);
    }
    else
        return _mul(x, _pow(x, y - 1));
}
ll _inv(ll p) { return _pow(p, mod - 2); }
int main(){
    fast;

    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;
        ll s = n * (n + 1) / 2;
        ll s2 = _mul(s, s);
        ll i2 = n * (n + 1);
        i2 = _mul(i2, 2 * n + 1);
        i2 = _mul(i2, _inv(6));

        ll deno = _sub(s2, i2);
        ll nemo = _inv(n);

        ll ans = _mul(deno, nemo);
        cout << ans << '\n';
    }

    return 0;
}
