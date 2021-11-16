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
#define pp pop_back
#define mp make_pair
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;

    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vector<ll> a(n + 1), b(n + 1);
        ll c = 0;
        for (ll i = 1; i <= n; i++){
            cin >> a[i];
        }
        for (ll i = 1; i <= n; i++){
            cin >> b[i];
        }
        for (ll i = 1; i <= n; i++)
        {
            if (a[i] - a[i - 1] >= b[i]){
                c++;
            }
        }
        cout << c << "\n";
    }

    return 0;
}
