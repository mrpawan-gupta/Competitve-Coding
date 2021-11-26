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
        long n, m, sum, x, z, y;
        cin >> n >> m;
        x = n - m;
        if (x <= m + 1)
            cout << x;
        else
        {
            y = x / (m + 1);
            z = (x) % (m + 1);
            long c = (m + 1) - z;
            sum = c * (y) * (y + 1) / 2 + z * (y + 1) * (y + 2) / 2;
            cout << sum;
        }
        cout << endl;
    }

    return 0;
}
