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
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
vector<ll> tx, a;
ll s, tl;

const ll MAX = 1'000'000'000'000'000LL;

void build(int v, int l, int r)
{
    if (l == r)
        tx[v] = a[l];
    else
    {
        int m = (l + r) / 2;
        build(v * 2, l, m);
        build(v * 2 + 1, m + 1, r);
        tx[v] = min(tx[v * 2], tx[v * 2 + 1]);
    }
}

void update(int v, int l, int r)
{
    if (l == r)
        tx[v] = MAX;
    else
    {
        int m = (l + r) / 2;
        if (tl <= m)
            update(v * 2, l, m);
        else
            update(v * 2 + 1, m + 1, r);
        tx[v] = min(tx[v * 2], tx[v * 2 + 1]);
    }
}

int lower_bound_s(int v, int l, int r)
{
    if (r < tl || (l == r && s < -tx[v]))
    {
        return -1;
    }
    if (l == r || -tx[v] <= s)
    {
        return r;
    }
    int m = (l + r) / 2;

    if (m < tl)
    {
        return lower_bound_s(2 * v + 1, m + 1, r);
    }
    if (s < -tx[2 * v])
    {
        return lower_bound_s(2 * v, l, m);
    }
    int res = lower_bound_s(2 * v + 1, m + 1, r);
    return (res == -1) ? m : res;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n >> s;
        tx = vector<ll>(4 * n);
        a = vector<ll>(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 1; i < n; ++i)
        {
            a[i] += a[i - 1];
        }
        build(1, 0, n - 1);
        int first = -1, second = -2;
        for (tl = 0; tl < n; ++tl)
        {
            int v = lower_bound_s(1, 0, n - 1);
            if (v != -1 && v - tl > second - first)
            {
                first = tl + 1;
                second = v + 1;
            }
            s -= a[tl];
            if (tl != 0)
                s += a[tl - 1];
            update(1, 0, n - 1);
        }
        if (first == -1)
        {
            cout << -1;
        }
        else
        {
            cout << first << " " << second;
        }
        cout << endl;
    }
}
