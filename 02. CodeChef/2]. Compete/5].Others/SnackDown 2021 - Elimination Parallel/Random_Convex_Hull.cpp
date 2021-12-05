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
const ll inf = 1e18;
#define pb push_back
#define pp pop_back
#define mp make_pair
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

const int N = 33;
const int mod = 998244353;

int n;
int x[N], y[N];

int cross(pair<int, int> p, pair<int, int> q, pair<int, int> r)
{
    return (q.first - p.first) * (r.second - q.second) - (q.second - p.second) * (r.first - q.first);
}

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 0; i < n; ++i)
        {
            cin >> x[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> y[i];
        }

        int ans = 0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                if (i == j)
                    continue;

                for (int ii = 0; ii < n; ++ii)
                {
                    for (int jj = 0; jj < n; ++jj)
                    {
                        if (ii == jj)
                            continue;

                        pair<int, int> p = {x[i], y[ii]};
                        pair<int, int> q = {x[j], y[jj]};

                        int incr = 0, kk;
                        if (cross({0, 0}, p, q) > cross({0, 1}, p, q))
                        {
                            incr = 1;
                            kk = 0;
                        }
                        else
                        {
                            incr = -1;
                            kk = n - 1;
                        }

                        int way = 1;
                        if (cross({0, 0}, p, q) > cross({1, 0}, p, q))
                        {
                            int cnt = 0;
                            for (int k = n - 1; k >= 0; --k)
                            {
                                if (k == i || k == j)
                                    continue;
                                int kross = cross({x[k], y[kk]}, p, q);
                                while (0 <= kk && kk < n && (kross > 0 || ((i < k) == (k < j) && kross == 0)))
                                {
                                    if (kk != ii && kk != jj)
                                        ++cnt;
                                    kk += incr;
                                    if (0 <= kk && kk < n)
                                        kross = cross({x[k], y[kk]}, p, q);
                                }
                                way = 1LL * way * cnt % mod;
                                --cnt;
                            }
                        }
                        else
                        {
                            int cnt = 0;
                            for (int k = 0; k < n; ++k)
                            {
                                if (k == i || k == j)
                                    continue;
                                int kross = cross({x[k], y[kk]}, p, q);
                                while (0 <= kk && kk < n && (kross > 0 || ((i < k) == (k < j) && kross == 0)))
                                {
                                    if (kk != ii && kk != jj)
                                        ++cnt;
                                    kk += incr;
                                    if (0 <= kk && kk < n)
                                        kross = cross({x[k], y[kk]}, p, q);
                                }
                                way = 1LL * way * cnt % mod;
                                --cnt;
                            }
                        }
                        ans = (ans + 1LL * way * cross({0, 0}, p, q)) % mod;
                    }
                }
            }
        }

        if (ans < 0)
        {
            ans += mod;
        }
        cout << ans << '\n';
    }
    return 0;
}
