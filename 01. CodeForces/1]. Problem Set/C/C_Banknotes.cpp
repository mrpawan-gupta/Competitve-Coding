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
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        ll ar[n];

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            ar[i] = pow(10, x);
        }
        if (n == 1)
        {
            cout << k + 1 << '\n';
        }
        else
        {
            ll ans = 0;
            ll x;
            k++;
            for (int i = 0; i < n - 1; i++)
            {
                if (ar[i + 1] % ar[i] == 0)
                {
                    x = ar[i + 1] / ar[i] - 1;
                }
                else
                {
                    x = ar[i + 1] / ar[i];
                }
                if (x >= k)
                {
                    ans += k * ar[i];
                    k = 0;
                    break;
                }
                else
                {
                    ans += x * ar[i];
                    k -= x;
                }
            }
            if (k)
            {
                ans += k * ar[n - 1];
            }
            cout << ans << '\n';
        }
    }

    return 0;
}
