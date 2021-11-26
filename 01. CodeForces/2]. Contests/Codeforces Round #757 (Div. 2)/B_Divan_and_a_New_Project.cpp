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
const long mod = 1e9 + 7, inf = 1e18;
#define pb push_back
#define pp pop_back
#define make_pair
#define fast  ios::sync_with_stdio(0);cin.tie(0); cout.tie(0);

int main()
{
    fast;

    int t;
    cin >> t;
    while (t--)
    {
        long n;
        cin >> n;
        vector<pair<ll, ll>> v(n);
        map<ll, ll> m;
        for (ll i = 0; i < n; i++)
        {
            cin >> v[i].first;
            v[i].second = i + 1;
        }
        sort(v.begin(), v.end(), greater<pair<ll, ll>>());
        ll mid = 0 + n / 2;
        vector<ll> v2;
        ll c = 0;
        ll x = mid + 1;
        unordered_map<ll, ll> a;
        for (auto i = 0; i < n; i += 2)
        {
            c += 2 * abs(x - mid) * v[i].first;
        
            a[v[i].second] = x;
            x++;
        }
        x = mid - 1;
        for (auto i = 1; i < n; i += 2)
        {
            c += 2 * abs(x - mid) * v[i].first;

            a[v[i].second] = x;
            x--;
        }
        cout << c << endl;
        cout << mid << " ";
        for (auto i = 1; i <= n; i++)
        {
            cout << a[i] << " ";
        }
      
        cout << endl;
    }
    return 0;
}
