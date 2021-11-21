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
        long a, b, p, q;
        cin >> a >> b >> p >> q;

        if ((p % a == 0) && (q % b == 0))
        {
            ll x = p / a;
            ll y = q / b;
            if ((x - y) == 1 || (y - x) == 1 || (y - x) == 0 || (x - y) == 0){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}
