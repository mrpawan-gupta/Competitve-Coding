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
    while (t--){
        ll n, m;
        cin >> n >> m;
        if (m > n)
        {
            string s = "10";
            ll c = 0;
            cout << (n + 1) * 2 + 3 * (m - (n + 1)) + 1 << endl;
            while (c <= n)
            {
                cout << s;
                c++;
            }
            m -= n + 1;
            string s2 = "110";
            c = 0;
            while (c < m)
            {
                cout << s2;
                c++;
            }
            cout << 1 << endl;
        }
        else if (n > m)
        {
            string s = "01";
            ll c = 0;
            cout << 2 * (m + 1) + 3 * (n - (m + 1)) + 1 << endl;
            while (c <= m)
            {
                cout << s;
                c++;
            }
            n -= (m + 1);
            c = 0;
            string s2 = "001";
            while (c < n)
            {
                cout << s2;
                c++;
            }
            cout << 0 << endl;
        }
        else if (n == m)
        {
            ll c = 0;
            cout << 2 * n + 2 << endl;
            string s = "10";
            while (c <= n)
            {
                cout << s;
                c++;
            }
            cout << endl;
        }
    }

    return 0;
}
