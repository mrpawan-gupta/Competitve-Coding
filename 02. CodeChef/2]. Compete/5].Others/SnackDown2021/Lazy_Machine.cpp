#include <bits/stdc++.h>
using namespace std;
using ll = long long;
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
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);


long long pow_mod(long long x, long long y)
{
    auto result = 1ll;
    while (y)
    {
        if (y % 2)
            result = result * x % mod;
        x = x * x % mod;
        y /= 2;
    }
    return result;
}


int main()
{
    fast;

    int t = 1;
    cin >> t;
    for (auto i = 1; i <= t; ++i)
    {
        ll n, q;
        cin >> n >> q;

        vector<ll> A(n);
        for (auto &x : A)
            cin >> x;

        vector<pair<int, int>> Q(q);
        for (auto &p : Q)
        {
            cin >> p.first >> p.second;
            --p.first, --p.second;
        }

        ll div_two = pow_mod(2, mod - 2) % mod;
        auto dp = vector<vector<ll>>(n, vector<ll>(n));
        for (auto i = 0; i < n; ++i)
            for (auto j = 0; j < n; ++j)
                dp[i][j] += max(0ll, A[j] - A[i]);

        ll mul = 1;
        for (auto &p : Q)
        {
            auto x = p.first, y = p.second;
            mul = mul * 2 % mod;

            for (auto u = 0; u < n; ++u)
            {
                if (u != x && u != y)
                {
                    dp[u][y] = dp[u][x] = (dp[u][x] + dp[u][y]) % mod * div_two % mod;
                    dp[y][u] = dp[x][u] = (dp[x][u] + dp[y][u]) % mod * div_two % mod;
                }
            }
            dp[x][y] = dp[y][x] = (dp[x][y] + dp[y][x]) % mod * div_two % mod;
        }

        for (auto u = 0; u < n; ++u)
            for (auto v = 0; v < n; ++v)
                dp[u][v] = dp[u][v] * mul % mod;

        ll result = 0;
        for (auto u = 0; u < n; ++u)
        {
            for (auto v = u + 1; v < n; ++v)
            {
                result = (result + dp[u][v] * (v - u) % mod) % mod;
            }
        }

        cout << result << endl;
    }

    return 0;
}

