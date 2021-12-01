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
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;

    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;
        vll v(n);
        vb b(1e6 + 1, 0);
        for (auto i = 0; i < n; i++){
            cin >> v[i];
            b[v[i]] = 1;
        }
        sort(v.begin(), v.end());
        vector<pair<ll, ll>> a;
        for (ll i = 1; i < n; i++)
        {
            for (ll j = 0; j < i; j++)
            {
                if (b[v[i] % v[j]] == 0)
                    a.pb({v[i], v[j]});
                if (a.size() >= (n / 2))
                    break;
            }
            if (a.size() >= (n / 2))
                break;
        }
        for (ll i = 0; i < a.size(); i++)
        {
            cout << a[i].first << " " << a[i].second << "\n";
        }
    }

    return 0;
}
