#include <bits/stdc++.h>

#define int long long
#define mp make_pair
#define x first
#define y second
#define all(a) (a).begin(), (a).end()
#define rall(a) (a).rbegin(), (a).rend()

typedef long double ld;
typedef long long ll;

using namespace std;

mt19937 rnd(143);

const ll inf = 1e9;
const ll M = 998'244'353;
const ld pi = atan2(0, -1);
const ld eps = 1e-4;

int n, d;

int cnt(vector<int> &schedule)
{
    int mx = 0, mn = inf;
    for (int i = 1; i < n; ++i)
    {
        mx = max(mx, schedule[i] - schedule[i - 1] - 1);
        mn = min(mn, schedule[i] - schedule[i - 1] - 1);
    }
    return min(mn, max(d - schedule.back() - 1, (mx - 1) / 2));
}

void solve(int test_case)
{
    cin >> n >> d;
    vector<int> a(n + 1);
    int mn = d, min_pos = 0;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        if (a[i] - a[i - 1] - 1 < mn)
        {
            mn = a[i] - a[i - 1] - 1;
            min_pos = i;
        }
    }
    vector<int> schedule;
    for (int i = 0; i <= n; ++i)
    {
        if (i != min_pos)
        {
            schedule.push_back(a[i]);
        }
    }
    int ans = cnt(schedule);
    if (min_pos > 1)
    {
        schedule[min_pos - 1] = a[min_pos];
    }
    ans = max(ans, cnt(schedule));
    cout << ans;
}

bool multi = true;

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int t = 1;
    if (multi){
        cin >> t;
    }
    for (int i = 1; i <= t; ++i){
        solve(i);
        cout << "\n";
    }
    return 0;
}