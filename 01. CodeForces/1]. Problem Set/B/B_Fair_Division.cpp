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
using pii = pair<int, int>;
using pll = pair<long long, long long>;
using mii = map<int, int>;
using mll = map<long long, long long>;
using umii = unordered_map<int, int>;
using umll = unordered_map<long long, long long>;
const ll mod = 1e9 + 7, inf = 1e18;
#define loop(a, b, c) for (auto a = b; a < c; a++)
#define pb push_back
#define pp pop_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

void solveTestcases()
{
    int n;
    cin >> n;

    vi arr(n);

    int one = 0;
    int two = 0;
    loop(i, 0, n)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            one++;
        }
        else
        {
            two++;
        }
    }

    if ((one + 2 * two) % 2 != 0)
    {
        cout << "NO" << endl;
        return;
    }
    else
    {
        int sum = (one + 2 * two) / 2;
        if (sum % 2 == 0 || (sum % 2 == 1 && one != 0))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}
int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        solveTestcases();
    }

    return 0;
}
