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

int main()
{
    fast;

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[101];
        int b[6] = {0, 1, 2, 2, 3, 3};

        for (auto i = 1; i <= n; ++i)
        {
            cin >> a[i];
            while (a[i] >= 6)
            {
                a[i] /= 12;
            }
            a[i] = b[a[i]];
        }
        for (auto i = 2; i <= n; ++i)
        {
            a[i] ^= a[i - 1];
        }
        if (a[n])
        {
            cout << "Henry\n";
        }
        else
        {
            cout << "Derek\n";
        }
    }
    return 0;
}