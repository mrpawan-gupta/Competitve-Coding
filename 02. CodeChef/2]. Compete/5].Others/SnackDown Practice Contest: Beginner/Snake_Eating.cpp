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
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int MX = 100005;
int a[MX], n;
ll sum[MX];

int cal(int x, int last)
{
    if (last == 0)
        return 0;
    int diff = a[n - 1] - x;
    int l = 0, r = last;
    int ans = 0;
    while (l <= r)
    {
        int mid = (l + r) / 2;
        if (mid == 0)
        {
            l = mid + 1;
            continue;
        }

        ll need = (sum[last] - sum[mid - 1]) - 1LL * diff * (last - mid + 1);
        if (mid >= need)
        {
            ans = last - mid + 1;
            r = mid - 1;
        }
        else
            l = mid + 1;
    }
    return ans;
}
int main()
{
    fast;
    int t, q, x;
    cin >> t;
    while (t--)
    {
        cin >> n >> q;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        sum[0] = 0LL;
        for (int i = 1; i < n; i++)
            sum[i] = 1LL * sum[i - 1] + 1LL * (a[n - 1] - a[i]);

        while (q--)
        {
            cin >> x;
            int cnt = 0;
            int idx = lower_bound(a, a + n, x) - a;
            cnt = (n - idx);
            cnt += cal(x, idx - 1);
            cout << cnt << "\n";
        }
    }
    return 0;
}
