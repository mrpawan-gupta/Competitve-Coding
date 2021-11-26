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

    int t;
    cin >> t;

    while (t--)
    {
        long long n, l, r, k;
        cin >> n >> l >> r >> k;
        vll v(n);
        for (auto i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        long long i = 0;
        long long j = n - 1;
        while (i < n && v[i] < l)
        {
            i++;
        }
        if (i == n)
        {
            cout << 0 << endl;
        }
        else
        {
            while (j >= 0 && v[j] > r)
            {
                j--;
            }
            if (j < 0)
            {
                cout << 0 << endl;
            }
            else
            {
                long long  c = 0;

                while (i <= j)
                {
                    if (k - v[i] >= 0)
                    {
                        c++;
                        k -= v[i];
                    }
                    i++;
                }
                cout << c << endl;
            }
        }
    }

    return 0;
}
