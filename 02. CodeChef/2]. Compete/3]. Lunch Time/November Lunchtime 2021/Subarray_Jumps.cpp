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
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll dp[1001][1001];

ll maxDP(ll a[], ll i, ll n, ll p){
    if (i == n - 1)
    {
        return dp[i][p] = (i - p + 1) * a[p] - a[i];
    }
    else if (dp[i][p] != -1)
    {
        return dp[i][p];
    }
    else{
            return dp[i][p] = min(
                   (i - p + 1) * a[p] - a[i] +
                       maxDP(a, i + 1, n, i),
                   maxDP(a, i + 1, n, p));
    }
}


int main(){
    fast;

    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;
        ll a[n];
        for (auto i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (n == 1)
        {
            cout << 0 << endl;
            continue;
        }
        memset(dp, -1, sizeof(dp));
        cout << max(maxDP(a, 1, n, 0), 0ll) << endl;
    }

    return 0;
}
