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
        ll n;
        cin >> n;
        vll arr(n,0);
        for (ll i = 0; i < n; i++)
            cin >> arr[i];
        ll ans = 0;
        for (ll j = 0; j <= 61; j++)
        {
            ll c = 0;
            for (ll i = 0; i < n; i++){
                if ((1ll << j) & arr[i]){
                    c++;
                }
            }
            if (c % 2 == 0){
                continue;
            }
            if (j == 61)
            {
                ans = -1;
                break;
            }
            ans += (1ll << j);
            for (ll i = 0; i < n; i++){
                arr[i] += (1ll << j);
            }
        }
        cout << ans << endl;
    }

    return 0;
}
