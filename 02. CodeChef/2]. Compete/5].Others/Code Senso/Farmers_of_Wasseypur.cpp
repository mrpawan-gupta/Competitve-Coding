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
const int N = 1e5 + 1;
#define pb push_back
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

vll g[N];
ll n, dp[N][2], a[N], ans, mx;

void dfs(int v, int p)
{
    ll path[2];
    path[0] = 0;
    path[1] = -1;

    for (auto u : g[v])
    {
        if (u == p)
        {
            continue;
        }
        dfs(u, v);
        if (a[v] > 0)
        {
            if (path[0] != -1 && dp[u][0] != -1)
            {
                ans = max(ans, path[0] + dp[u][0] + (a[v] == 2));
            }

            if (path[1] != -1 && dp[u][1] != -1)
            {
                ans = max(ans, path[1] + dp[u][1] + (a[v] == 2));
            }
        }
        else
        {
            if (path[0] != -1 && dp[u][1] != -1)
            {
                ans = max(ans, path[0] + dp[u][0] + (a[v] == -2));
            }

            if (path[1] != -1 && dp[u][0] != -1)
            {
                ans = max(ans, path[1] + dp[u][1] + (a[v] == -2));
            }
        }
        path[0] = max(path[0], dp[u][0]);
        path[1] = max(path[1], dp[u][1]);
    }
    if (a[v] > 0)
    {
        if (path[0] != -1)
        {
            dp[v][0] = (a[v] == 2) + path[0];
        }
        if (path[1] != -1)
        {
            dp[v][1] = (a[v] == 2) + path[1];
        }
    }
    else
    {
        if (path[0] != -1)
        {
            dp[v][1] = (a[v] == -2) + path[0];
        }
        if (path[1] != -1)
        {
            dp[v][0] = (a[v] == -2) + path[1];
        }
    }
}

// Binary Exponiansation ------
long long binpow(long long a, long long b)
{
    long long res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a;
        a = a * a;
        b >>= 1;
    }
    return res;
}

int main()
{
    fast;

    ll t;
    cin >> t;

    while (t--)
    {
        cin >> n;
        mx = -3;
        ans = -1;
        for (ll i = 1; i <= n; i++)
        {
            dp[i][0] = -1;
            dp[i][1] = -1;
            g[i].clear();
        }
        for (ll i = 1; i < n; i++)
        {
            ll u, v;
            cin >> u >> v;
            g[u].pb(v);
            g[v].pb(u);
        }
        for (ll i = 1; i <= n; i++)
        {
            cin >> a[i];
            mx = max(mx, a[i]);
        }
        dfs(1, 0);
        if (ans != -1)
        {
            mx = binpow(2, ans);
        }
        else if (mx < 0)
        {
            mx += mod;
        }
        cout << mx << endl;
    }

    return 0;
}
