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
const ll mod = 998244353, inf = 1e18;
#define pb push_back
#define pp pop_back
#define mp make_pair
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const ll MAX = 1e6 + 10;
const ll size = 4e5;
ll bTree[MAX] = {0};
ll sum(ll index)
{
    ll sum = 0;

    index = index + 1;

    while (index > 0)
    {
        sum += bTree[index];
        sum %= mod;
        index -= index & (-index);
    }
    return sum % mod;
}

void updateTree(ll n, ll index, ll val)
{
    index = index + 1;

    while (index <= n)
    {
        bTree[index] += val;
        bTree[index] %= mod;

        index += index & (-index);
    }
}

int main(){
    fast;

    ll n;
    cin >> n;
    ll a[n];
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < MAX; i++)
        bTree[i] = 0;
    for (ll i = 0; i < n; i++)
    {
        updateTree(size, a[i], sum(a[i] - 1) + 1);
    }
    cout << (sum(size) + 1) % mod << endl;

    return 0;
}