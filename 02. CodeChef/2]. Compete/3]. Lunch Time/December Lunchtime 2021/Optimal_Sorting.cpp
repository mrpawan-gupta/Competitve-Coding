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
using pii = pair<int, int>;
using pll = pair<long long, long long>;
using mii = map<int, int>;
using mll = map<long long, long long>;
using umii = unordered_map<int, int>;
using umll = unordered_map<long long, long long>;
const long long mod = 1e9 + 7, inf = 1e18;
#define loop(a, b, c) for (auto a = b; a < c; a++)
#define pb push_back
#define pp pop_back
#define mp make_pair
#define F firidx
#define endl "\n"
#define S second
#define all(x) x.begin(), x.end()
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

void solveTestCases()
{
    ll n;
    cin >> n;
    vll a(n), b(n);
    for (ll i = 0; i < n; i++){
        cin >> a[i], b[i] = a[i];
    }
    sort(b.begin(), b.end());
    ll st = n - 1;
    ll ans = 0;
    while (st > 0)
    {
        if (a[st] != b[st])
        {
            ll ma = b[st], mi = a[st];
            ll i = st;
            while (i > 0)
            {
                if (a[i] != b[st])
                    i--;
                else
                    break;
                mi = min(a[i], mi);
            }
            ll pos = lower_bound(b.begin(), b.end(), mi) - b.begin();
            for (ll j = pos; j < i; j++)
                mi = min(mi, a[j]);
            while (b[pos] != mi)
            {
                pos = lower_bound(b.begin(), b.end(), mi) - b.begin();
                for (ll j = pos; j < i; j++)
                    mi = min(mi, a[j]);
            }
            ans += (ma - mi);
            st = pos - 1;
        }
        else
            st -= 1;
    }
    cout << ans << "\n";
}
int main()
{
    fast;

    int t;
    cin >> t;
    while (t--)
    {
        solveTestCases();
    }

    return 0;
}
