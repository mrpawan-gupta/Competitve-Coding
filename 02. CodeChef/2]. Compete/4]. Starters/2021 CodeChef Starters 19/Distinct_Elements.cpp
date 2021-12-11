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
#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main()
{
    fast;

    int t;
    cin >> t;

    while (t--){
        int n;
        cin >> n;
        int a[n];
        ll ans = 1;
        unordered_map<int, int> h;

        for (int i = 0; i < n; i++){
            cin >> a[i];
            h[a[i]]++;
        }
        
        unordered_map<int, int>::iterator i;
        for (i = h.begin(); i != h.end(); i++)
        {
            if (i->second == 1)
                ans = ans * 2;
            else
            {
                ans = ans * (1 + i->second);
            }
            ans %= mod;
        }
        cout << ans - 1 << endl;
    }

    return 0;
}
