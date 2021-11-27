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
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

void solve()
{
    ll n;
    cin >> n;
    vll v, a;
    ll x;
    map<ll, ll> mp, ch;
    for (ll i = 0; i < 2 * n; i++)
    {
        cin >> x;
        v.pb(x);
        if (mp[x] == 0)
            a.pb(x);
        mp[x]++;
    }
    sort(a.begin(), a.end());
    ll k = 0;
    ch[a[0]]++;
    for (ll i = 1; i < a.size(); i++)
    {
        ll temp = ceil((i + 1) / 2.0);
        ch[a[temp - 1]]++;
    }
    k = a.size() - 1;
    ch[a[k]]++;

    for (ll i = k - 1; i >= 0; i--)
    {
        ll temp;
        temp = i + ceil((k - i + 1) / 2.0);
        ch[a[temp - 1]]++;
    }

    for (auto i = mp.begin(), j = ch.begin(); i != mp.end(); i++, j++)
    {
        if (*i != *j)
        {
            cout << "-1\n";
            return;
        }
    }

    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << ' ';
    }
    cout << '\n';
}

int main(){
    fast;

    int t;
    cin >> t;

    while (t--){
        solve();
    }

    return 0;
}
