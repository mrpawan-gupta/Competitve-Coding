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

int main()
{
    fast;

    int n, m;
    cin >> n >> m;

    int idx = 1;
    long long int ans = 0;
    for (int i = 0; i < m; i++)
    {
        int c;
        cin >> c;

        if (c >= idx)
            ans += c - idx;
        else
            ans += n - (idx - c);
        idx = c;
    }

    cout << ans << endl;

    return 0;
}
