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

bool cmp(pair<int, int> a, pair<int, int> b)
{
    return a.first < b.first;
}
int solve(vector<pair<int, int>> &hor, int l, int r)
{
    int cur = l;
    int cnt = 0;
    int mx = -1;
    sort(hor.begin(), hor.end(), cmp);
    int i = 0;
    while (i < hor.size() && cur <= r)
    {
        if (hor[i].first <= cur)
        {
            if (hor[i].second >= cur)
            {
                mx = max(mx, hor[i].second);
                i++;
            }
            else
                i++;
        }
        else
        {
            if (mx >= cur)
            {
                cur = mx + 1;
                cnt++;
                mx = -1;
            }
            else
            {
                return -1;
            }
        }
    }

    if (mx >= cur)
    {
        cur = mx + 1;
        cnt++;
    }
    if (cur <= r)
        return -1;
    return cnt;
}
int main()
{
    fast;

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> k >> m;
        vector<pair<int, int>> hor, ver;
        pair<int, int> top_left = mp((n - k) / 2 + 1, (n - k) / 2 + 1);
        pair<int, int> top_right = mp((n - k) / 2 + 1, (n - k) / 2 + 1 + k - 1);
        pair<int, int> below_left = mp((n - k) / 2 + 1 + k - 1, (n - k) / 2 + 1);
        pair<int, int> below_right = mp((n - k) / 2 + 1 + k - 1, (n - k) / 2 + 1 + k - 1);

        for (int i = 0; i < m; i++)
        {
            int x1, y1, x2, y2;
            cin >> x1 >> y1 >> x2 >> y2;
            if (x1 > x2)
                swap(x1, x2);
            if (y1 > y2)
                swap(y1, y2);

            if (!(y1 > top_right.second || y2 < top_left.second))
                hor.pb(mp(y1, y2));
            else if (!(x1 > below_left.first || x2 < top_left.first))
                ver.pb(mp(x1, x2));
        }
        int res_h = solve(hor, top_left.second, top_right.second);
        int res_v = solve(ver, top_left.first, below_left.first);

        if (res_h == -1 || res_v == -1)
        {
            cout << -1 << endl;
        }
        else
            cout << res_h + res_v << endl;
    }
    return 0;
}