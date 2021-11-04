#include <bits/stdc++.h>
using namespace std;
using l = long;
using ll = long long int;
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
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

const ll N = 2e5 + 4;
ll fact[N], factInv[N];
ll binexp(ll a, ll b)
{
    a %= mod;
    ll res = 1;
    while (b)
    {
        if (b & 1)
            res = res * a % mod;
        a = a * a % mod;
        b >>= 1;
    }
    return res;
}
ll ncr(ll n, ll r)
{
    if (r > n)
        return 0;
    return fact[n] * factInv[r] % mod * factInv[n - r] % mod;
}

int main()
{
    fast;

    fact[0] = 1;
    for (ll i = 1; i < N; i++)
        fact[i] = fact[i - 1] * i % mod;
    factInv[N - 1] = binexp(fact[N - 1], mod - 2);
    for (ll i = N - 1; i > 0; i--)
        factInv[i - 1] = factInv[i] * i % mod;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        ll win = 0;
        for (ll i = 0; i <= n; i++)
        {
            ll N = m + 1 - i, R = i + 1;
            win += ncr(N + R - 1, R - 1);
            win %= mod;
        }
        ll loss = 0;
        for (ll i = 1; i <= n + 1; i++)
        {
            ll N = m - i + 1, R = i;
            loss += ncr(N + R, R); //ncr(N+R-1,R-1) + ncr(N+R-2,R-1) + .... ncr(R-1,R-1)
            loss %= mod;
        }
        ll ans = (win + loss) % mod;
        cout << ans << '\n';
    }
    return 0;
}
