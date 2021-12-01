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
#define fast ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);

int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        ll n, h;
        cin >> n >> h;
        long long a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long md[n];
        ll mxd = 0, s = 0;
        for (ll i = 0; i < n - 1; i++)
        {
            md[i] = a[i + 1] - a[i];
            mxd = max(md[i], mxd);
            s += md[i];
        }
        md[n - 1] = INT_FAST64_MAX;
        if ((h - s) >= mxd)
        {
            cout << h - s << "\n";
            continue;
        }
        ll j = 1;
        ll c = mxd;
        while (j <= mxd)
        {
            ll mid = (j + mxd) / 2;
            s = 0;
            for (ll i = 0; i < n; i++)
            {
                s += min(mid, md[i]);
            }
            if (s >= h)
            {
                c = min(mid, c);
                mxd = mid - 1;
            }
            else
            {
                j = mid + 1;
            }
        }
        cout << c << "\n";
    }

    return 0;
}
