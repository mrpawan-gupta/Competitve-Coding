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
#define fast  ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

int main()
{
    fast;

    int t;
    cin >> t;
    while (t--)
    {
        int n, d;
        cin >> n >> d;
        ll a[n][n];
        for (ll i = 0; i < n - 1; i++)
        {
            a[i][i] = 0;
            for (ll j = i + 1; j < n; j++)
            {
                cin >> a[i][j];
                a[j][i] = a[i][j];
            }
        }
        ll pr[n];
        pr[0] = 0;
        for (ll i = 1; i < n; i++)
        {
            pr[i] = pr[i - 1] + a[i][i - 1];
        }
        ll x1[n][n], x2[n];
        x1[0][0] = 0;
        x2[0] = 0;
        for (ll i = 1; i < n; i++)
        {
            x1[i][0] = a[i][0] + pr[i - 1];
            x1[i][i - 1] = a[i][i - 1] + min(x2[i - 1], x1[i - 1][max(i - 2, 0LL)]);
            for (ll j = 1; j < i - 1; j++)
            {
                x1[i][j] = a[i][j] + x2[j + 1] + pr[i - 1] - pr[j + 1];
            }
            x2[i] = x1[i][0];
            for (ll j = 1; j < i - 1; j++)
            {
                x2[i] = min(x2[i], x1[i][j]);
            }
        }
        ll c = x1[n - 1][0] + a[n - 1][n - 2];
        for (ll j = 1; j < n - 2; j++)
        {
            c = min(c, x1[n - 1][j] + a[n - 1][n - 2]);
        }
        cout << (c + 2 * (n - 1) * d )<< '\n';
    }

    return 0;
}