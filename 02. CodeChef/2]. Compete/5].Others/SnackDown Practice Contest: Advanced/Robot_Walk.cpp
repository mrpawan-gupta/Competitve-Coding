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

bitset<500008> b1;
bitset<500008> b2;

int main()
{
    fast;

    int t;
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < 500008; i++)
        {
            b1[i] = 0;
            b2[i] = 0;
        }
        b1[250000] = 1;
        b2[250000] = 1;
        int n;
        cin >> n;

        vector<int> v1;
        vector<int> v2;
        int s1 = 0;
        int s2 = 0;
        for (int i = 0; i < 2 * n + 1; i++)
        {
            if (i % 2 == 0)
            {
                int x;
                cin >> x;
                if (i % 4 == 0)
                {
                    b1 = (b1 >> x | (b1 << x));
                    v1.pb(x);
                    s1 += x;
                }
                else
                {
                    b2 = (b2 >> x | (b2 << x));
                    v2.pb(x);
                    s2 += x;
                }
            }
            else
            {
                char c;
                cin >> c;
            }
        }

        if (n <= 2)
        {
            cout << "NO" << endl;
            continue;
        }
        int m1 = INT_MAX;
        for (int i = 0; i < 500008; i++)
        {
            if (b1[i] == 1)
            {
                m1 = min(m1, abs(i - 250000));
            }
        }
        int m2 = INT_MAX;
        for (int i = 0; i < 500008; i++)
        {
            if (b2[i] == 1)
            {
                m2 = min(m2, abs(i - 250000));
            }
        }

        cout << m1 + m2 << endl;
    }

    return 0;
}
