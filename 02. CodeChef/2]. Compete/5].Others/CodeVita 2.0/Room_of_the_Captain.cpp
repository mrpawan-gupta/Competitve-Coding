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
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int main()
{
    fast;

    int n;
    cin >> n;

    vector<int> v;

    int u;
    while (cin >> u)
    {
        v.push_back(u);
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        if (i != v.size() - 1)
        {
            if (v[i] != v[i - 1] and v[i] != v[i + 1])
            {
                cout << v[i] << '\n';
                break;
            }
        }
        else
        {
            cout << v[i] << '\n';
        }
    }
    return 0;
}
