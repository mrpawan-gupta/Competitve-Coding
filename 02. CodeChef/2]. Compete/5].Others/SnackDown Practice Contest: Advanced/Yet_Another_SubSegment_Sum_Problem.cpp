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

const int maxn = 100 * 1000 + 10;
ll a[maxn], b[maxn], c, d, q, p[maxn];
long double val;
int zero, L, R, loc, n;
pair<ll, ll> P;
vector<pair<long double, int>> v[4 * maxn];
vector<pair<ll, ll>> ps[4 * maxn];

void ins(int x, int &l, int &r, int &ind)
{
    v[x].push_back(make_pair(val, ind));
    if (r - l == 1)
        return;
    int mid = (l + r) / 2;
    if (ind < mid)
        ins(2 * x + 1, l, mid, ind);
    else
        ins(2 * x + 2, mid, r, ind);
}

void Bd(int x, int &l, int &r)
{
    sort(v[x].begin(), v[x].end());
    P = {0, 0};
    ps[x].push_back(P);
    for (int i = 0; i < ((int(v[x].size()))); i++)
    {
        P = {P.first + a[v[x][i].second], P.second + b[v[x][i].second]};
        ps[x].push_back(P);
    }
    if (r - l == 1)
        return;
    int mid = (l + r) / 2;
    Bd(2 * x + 1, l, mid);
    Bd(2 * x + 2, mid, r);
}

ll get(int x, int &l, int &r, int &ql, int &qr)
{
    if (l >= qr || ql >= r)
        return 0;
    if (ql <= l && r <= qr)
    {
        loc = lower_bound(v[x].begin(), v[x].end(), make_pair(val, -1)) - v[x].begin();
        return c * ps[x][loc].first - d * ps[x][loc].second;
    }
    int mid = (l + r) / 2;
    return get(2 * x + 1, l, mid, ql, qr) + get(2 * x + 2, mid, r, ql, qr);
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        p[i + 1] = p[i] + a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
        if (a[i] != 0)
        {
            val = (long double)b[i] / (long double)a[i];
            ins(zero, zero, n, i);
        }
    }
    Bd(zero, zero, n);
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        cin >> L >> R >> c >> d;
        L--;
        if (d == 0)
            cout << c * (p[R] - p[L]) << endl;
        else
        {
            val = (long double)c / (long double)d;
            cout << get(zero, zero, n, L, R) << endl;
        }
    }
    return 0;
}
