#include<bits/stdc++.h>
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define rep(i, a, b) for(ll i=a; i<b; i++)
#define rrep(i, a, b) for(ll i=a; i>=b; i--)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

typedef tree<ll, null_type, less_equal<ll>, rb_tree_tag, tree_order_statistics_node_update> pbds;

const ll N = 2e5+5;
const ll M = 998244353;
ll fact[N];

struct FenwickTree {
    vector<ll> bit;  // binary indexed tree
    ll n;

    FenwickTree(ll n) {
        this->n = n;
        bit.assign(n, 0);
    }

    FenwickTree(vector<ll> a) : FenwickTree(a.size()) {
        for (size_t i = 0; i < a.size(); i++)
            add(i, a[i]);
    }

    ll sum(ll r) {
        ll ret = 0;
        for (; r >= 0; r = (r & (r + 1)) - 1)
            ret += bit[r];
        return ret;
    }

    ll sum(ll l, ll r) {
        return sum(r) - sum(l - 1);
    }

    void add(ll idx, ll delta) {
        for (; idx < n; idx = idx | (idx + 1))
            bit[idx] += delta;
    }
};

void init(){
    fact[0] = 1;
    rep(i, 1, N) fact[i] = (i * fact[i-1])%M;
}

ll powmod(ll a, ll b, ll p = M){
    a %= p;
    if (a == 0) return 0;
    ll product = 1;
    while(b > 0){
        if (b&1){    // you can also use b % 2 == 1
            product *= a;
            product %= p;
            --b;
        }
        a *= a;
        a %= p;
        b /= 2;    // you can also use b >> 1
    }
    return product;
}

ll inv(ll a, ll p = M){
    return powmod(a, p-2, p);
}


int main(int argc, char const *argv[]){
    IOS;
    init();
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n);
    vector<ll> b(m);
    vector<ll> cnt(N, 0);
    FenwickTree ft(N);
    rep(i, 0, n){
        cin >> a[i];
        cnt[a[i]]++;
        ft.add(a[i], 1);
    }
    rep(i, 0, m) cin >> b[i];
    ll ans = 0;
    ll den = 1;
    rep(i, 1, N) den = (den * fact[cnt[i]]) % M;
    rep(i, 0, n){
        if(i == m) break;
        // n-i-1 elements after ith index
        ll arr = fact[n-i-1];
        arr = (arr * inv(den)) % M;
        ll sum = ft.sum(b[i] - 1);
        arr = (arr * sum) % M;
        ans = (ans + arr) % M;
        if(cnt[b[i]] == 0) break;
        den = (den * inv(cnt[b[i]])) % M;
        cnt[b[i]]--;
        ft.add(b[i], -1);
        if(i == n-1 && n < m) ans = (ans + 1) % M;
    }
    cout << ans << '\n';

    
}