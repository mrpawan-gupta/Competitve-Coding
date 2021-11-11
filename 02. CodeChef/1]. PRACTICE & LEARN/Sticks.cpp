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
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;

    int t;
    cin >> t;
    while (t-- > 0)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        sort(a.rbegin(), a.rend());
        vector<pair<int, int>> v;
        for (int i = 0; i + 1 < n; ++i)
        {
            if (a[i] == a[i + 1])
            {
                v.push_back(make_pair(a[i], a[i + 1]));
                ++i;
            }
        }
        if (v.size() < 2)
        {
            cout << "-1\n";
            continue;
        }
        cout << 1LL * v[0].first * v[1].first << '\n';
    }
    return 0;
}
