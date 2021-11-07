#include <bits/stdc++.h>
using namespace std;
using l = long;
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

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        for (ll i = 2; i <= n; i++)
        {
            if (m == 0)
                break;
            cout << i - 1 << " " << i << "\n";
            m -= 1;
        }
        ll low = 1, high = n, c = -1;
        while (low <= high)
        {
            ll mid = (low + high) / 2;
            ll sum = (mid * (mid - 1)) / 2;
            if (sum == (m + mid - 1))
            {
                c = mid;
                break;
            }
            else if (sum < (m + mid - 1))
                low = mid + 1;
            else
                high = mid - 1;
        }
        if (c == -1)
        {
            c = low;
        }
        for (ll i = 1; i <= c; i++)
        {
            for (ll j = i + 2; j <= c; j++)
            {
                if (m == 0)
                    break;
                cout << i << " " << j << "\n";
                m--;
            }
            if (m == 0)
                break;
        }
    }
    return 0;
}
