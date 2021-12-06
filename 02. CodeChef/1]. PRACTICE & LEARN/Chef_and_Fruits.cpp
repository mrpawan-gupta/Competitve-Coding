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
        int n, m, k;
        cin >> n >> m >> k;
        if (m > n)
        {
            if (n + k >= m)
                cout << 0 << endl;
            else
                cout << m - (n + k) << endl;
        }
        else if (n > m)
        {
            if (m + k >= n)
                cout << 0 << endl;
            else
                cout << n - (m + k) << endl;
        }
        else
            cout << 0 << endl;
    }
    return 0;
}
