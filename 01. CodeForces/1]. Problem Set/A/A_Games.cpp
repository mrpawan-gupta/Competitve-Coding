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
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int main()
{
    fast;

    int n;
    cin >> n;

    int number(0);
    vector<pair<int, int>> vect;
    for (int i = 0; i < n; ++i)
    {
        int u, v;
        cin >> u >> v;
        vect.pb(make_pair(u, v));
        for (int j = 0; j < i; ++j)
        {
            if (vect[i].first == vect[j].second)
            {
                number += 1;
            }
            if (vect[i].second == vect[j].first)
            {
                number += 1;
            }
        }
    }
    cout << number << endl;

    return 0;
}
