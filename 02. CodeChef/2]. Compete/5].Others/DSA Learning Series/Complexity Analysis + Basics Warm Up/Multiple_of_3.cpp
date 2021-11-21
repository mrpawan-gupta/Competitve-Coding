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

int main()
{
    fast;

    int t;
    cin >> t;
    while (t--)
    {

        ll k;
        int d0, d1;
        cin >> k >> d0 >> d1;
        int s = d0 + d1;

        int c = (2 * s) % 10 + (4 * s) % 10 + (6 * s) % 10 + (8 * s) % 10;
        ll cycles = (k - 3) / 4;
        ll ans = 0;
        if (k == 2)
        {
            ans = s;
        }
        else
        {
            ans = s + (s % 10) + (c * 1LL * cycles);

            int left = (k - 3) - (cycles * 4);
            int p = 2;
            for (int i = 1; i <= left; i++)
            {
                ans += (p * s) % 10;
                p = (p * 2) % 10;
            }
        }

        if (ans % 3 == 0)
            cout << "YES\n";

        else
            cout << "NO\n";
    }
    return 0;
}
