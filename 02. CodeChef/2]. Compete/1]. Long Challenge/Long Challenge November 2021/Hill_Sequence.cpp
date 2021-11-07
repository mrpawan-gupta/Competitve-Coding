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
        ll n, x, flag = 0;
        cin >> n;
        map<ll, ll> a;
        vll v;

        for (ll i = 0; i < n; i++)
        {
            cin >> x;
            a[x]++;
        }
        for (auto x : a)
        {
            if (x.second > 2)
            {
                flag = 1;
                break;
            }
            v.pb(x.first);
        }
        sort(v.begin(), v.end());
        if (flag == 1 || a[v[v.size() - 1]] == 2)
        {
            cout << "-1";
        }
        else
        {
            for (ll i = 0; i < v.size(); i++)
            {
                if (a[v[i]] == 2)
                {
                    cout << v[i] << " ";
                }
            }
            for (ll i = v.size() - 1; i >= 0; i--)
            {
                cout << v[i] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
