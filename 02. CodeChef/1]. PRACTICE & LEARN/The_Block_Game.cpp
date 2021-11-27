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
        int n, m, rev = 0;
        int temp;
        cin >> n;
        temp = n;
        while (n != 0)
        {
            m = n % 10;
            rev = (rev * 10) + m;
            n = n / 10;
        }
        if (temp == rev)
        {
            cout << "wins" << endl;
        }
        else
        {
            cout << "loses" << endl;
        }
    }
    return 0;
}
