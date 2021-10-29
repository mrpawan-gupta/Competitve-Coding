#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<long>;
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
        k += 1;
        ll Result = 0;
        vi v(n);

        for (ll i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        for (ll i = 0; i < n - 1; i++)
        {
            if (k > 0)
            {
                ll x = pow(10, v[i + 1] - v[i]) - 1;
                ll val = min(x, k);
                Result += pow(10, v[i]) * val;
                k -= val;
            }
        }
        Result += k * pow(10, v[n - 1]);
        cout << Result << endl;
    }

    return 0;
}
