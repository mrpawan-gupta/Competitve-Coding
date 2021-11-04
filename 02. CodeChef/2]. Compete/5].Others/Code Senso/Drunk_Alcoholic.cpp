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
        int k;
        cin >> k;

        int ans = 0;
        for (int i = 0; i < k; i++)
        {
            if (i % 2 == 0)
            {
                ans += 3;
            }
            else
            {
                ans -= 1;
            }
        }
        cout << ans << '\n';
    }

    return 0;
}
