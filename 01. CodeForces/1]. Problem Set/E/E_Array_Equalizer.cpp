#include <bits/stdc++.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define int long long
#define endl "\n"
#define sz(w) (int)(w.size())
using pii = pair<int, int>;

const double EPS = 1e-9;
const long long INF = 1e18;

const int N = 2e5 + 5;
int n, m, a[N], b[N], c[N], add[N], mob[N];

void mobius(){
    mob[1] = 1;
    for (int i = 2; i < N; i++){
        mob[i]--;
        for (int j = i + i; j < N; j += i){
            mob[j] -= mob[i];
        }
    }
}

int32_t main(){
    IOS;
    mobius();
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    for (int i = 1; i <= n; i++)
        cin >> b[i];
    for (int i = 1; i <= n; i++)
        c[i] = b[i] - a[i];
    c[1] = 0;
    vector<int> z;
    for (int i = 1; i <= n; i++)
    {
        int d = c[i];
        for (int j = i; j <= n; j += i)
        {
            c[j] -= d;
        }
        add[i] = d;
    }
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        if (mob[i] == 0)
            ans += abs(add[i]);
        else if (mob[i] == -1)
            z.push_back(-add[i]);
        else
            z.push_back(add[i]);
    }
    sort(z.begin(), z.end());
    vector<int> pref = z;
    for (int i = 1; i < sz(z); i++)
        pref[i] = pref[i - 1] + z[i];
    auto sum = [&pref](int l, int r){
        if (r < 0)
            return 0LL;
        int res = pref[r];
        if (l - 1 >= 0)
            res -= pref[l - 1];
        return res;
    };
    int q;
    cin >> q;
    while (q--){
        int x;
        cin >> x;
        x -= a[1];
        int lo = 0, hi = sz(z) - 1;
        while (lo <= hi)
        {
            int mid = (lo + hi) / 2;
            if (z[mid] <= -x)
                lo = mid + 1;
            else
                hi = mid - 1;
        }
        swap(lo, hi);
        int res = sum(hi, sz(z) - 1) + (sz(z) - hi) * x;
        res -= (sum(0, lo) + (lo + 1) * x);
        cout << ans + res << endl;
    }
    return 0;
}