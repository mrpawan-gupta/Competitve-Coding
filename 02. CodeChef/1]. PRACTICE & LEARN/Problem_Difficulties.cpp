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
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int main()
{
    fast;

    int t;
    cin >> t;
    while (t--)
    {
        vi a(4);
        map<int, int> x;

        for (int i = 0; i < 4; i++)
        {
            cin >> a[i];
            x[a[i]]++;
        }
        if (x.size() == 3 || x.size() == 4)
        {
            cout << 2 << '\n';
        }
        else if (x.size() == 1)
        {
            cout << 0 << '\n';
        }
        else
        {
            if (x[a[0]] == 2)
            {
                cout << 2 << '\n';
            }
            else
            {
                cout << 1 << '\n';
            }
        }
    }

    return 0;
}
