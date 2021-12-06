#include <bits/stdc++.h>
using namespace std;
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
const ll mod = 1e9 + 7, Max = 1e5;
#define pb push_back
#define pp pop_back
#define mp make_pair
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll fact[Max + 1];

ll LastElement(ll x){
    return ((x + 1) * x) / 2;
}

ll powmod(ll a, ll b, ll p){
    a %= p;
    if(a==0){
        return 0;
    }
    ll x = 1;
    while (b > 0){
        if(b&1){
            x *= a;
            x %= p;
            --b;
        }
        a *= a;
        a %= p;
        b /= 2;
    }
    return x;
}

ll inv(ll a, ll p){
    return powmod(a, p - 2, p);
}
ll nCk(ll n, ll k, ll p)
{
    return ((fact[n] * inv(fact[k], p) % p) * inv(fact[n - k], p)) % p;
}

pair <ll,ll> LevelIndex(ll n)
{
    ll lvl = -1;
    ll idx = -1;

    if (n == 1)
    {
        return {1, 1};
    }

    ll st = 2;
    ll end = 1LL + ceil(sqrt(2 * n));
    while (st <= end)
    {
        lvl = (st + end) / 2;
        if (LastElement(lvl) >= n && LastElement(lvl - 1)<n)
        {
            break;
        }
        else if (LastElement(lvl) > n)
        {
            end = lvl - 1;
        }
        else
        {
            st = lvl + 1;
        }
    }

    idx = n - (lvl * (lvl - 1)) / 2;
    return {lvl, idx};
}

int main(){
    fact[0] = 1;
    fact[1] = 1;
    for (int i = 2; i <= Max; i++){
        fact[i] = fact[i - 1] * i % mod;
    }

    int t;
    cin >> t;
    while (t--)
    {
        ll s, e;
        cin >> s >> e;

        pair <ll,ll> res1, res2;
        res1 = LevelIndex(s);
        res2 = LevelIndex(e);

        ll slvl = res1.first;
        ll sidx = res1.second;
        ll elvl = res2.first;
        ll eidx = res2.second;

        ll L = elvl - slvl;
        ll K = eidx - sidx;

        ll ans = -1;

        if (L <= 0 || K<0 || K > L){
            ans = 0;
        }
        else {
            ans = nCk(L, K, mod);
        }
        cout << ans << '\n';

    }

    return 0;
}
