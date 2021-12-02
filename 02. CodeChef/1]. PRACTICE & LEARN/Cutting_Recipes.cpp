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

        vll a(n);

        for (int i = 0; i < n; i++){
            cin >> a[i];
        }

        ll g = __gcd(a[0], a[1]);

        for (auto i = 2; i < n; i++){
            g = __gcd(g, a[i]);
        }
        for (auto i = 0; i < n; i++){
            cout << a[i] / g << " ";
        }
        cout << '\n';
    }

    return 0;
}
