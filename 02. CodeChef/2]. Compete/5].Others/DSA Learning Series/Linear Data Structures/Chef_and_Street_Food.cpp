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

int main(){
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vi s(n), p(n), v(n);

        long int max = 0, x = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> s[i];  // no of store of i item
            cin >> p[i];  // no of pepole coming to buy
            cin >> v[i]; // price of i item

            x = (p[i] / (s[i] + 1)) * v[i];
            if (max < x)
            {
                max = x;
            }
        }
        cout << max << '\n';
    }

    return 0;
}
