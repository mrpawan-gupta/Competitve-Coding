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

int main()
{
    fast;

    int t;
    long long int n, sum1, sum2, d, i, j;
    cin >> t;
    while (t--)
    {
        sum1 = sum2 = 0;
        cin >> n;

        if (n % 4 != 0)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
            for (int i = 2; i <= n; i += 2)
            {
                cout << i << " ";
                sum1 += i;
            }
            for (int i = 1; i < n - 2; i += 2)
            {
                cout << i << " ";
                sum2 += i;
            }
            cout << sum1 - sum2 << "\n";
        }
    }
    return 0;
}