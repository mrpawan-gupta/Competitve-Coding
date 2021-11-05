#include <bits/stdc++.h>
using namespace std;
using l = long;
using ll = long long int;
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
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        ll n, k;
        cin >> n >> k;

        ll total = 1;
        ll ans = 0;
        while (total < n)
        {
            if (total < k)
            {
                total += total;
                ans++;
            }
            else
            {
                ll req = n - total;
                if (req % k == 0)
                    ans += (req / k);
                else
                {
                    ans += (req / k);
                    ans++;
                }
                break;
            }
        }
        cout << ans << "\n";
    }

    return 0;
}
