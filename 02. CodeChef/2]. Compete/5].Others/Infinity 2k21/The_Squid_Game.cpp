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
    long n;
    cin >> n;

    vl array(n);
    long sum = 0;

    loop(i, 0, n)
    {
        cin >> array[i];
        sum += array[i]; // sum of all elements
    }
    long min = *min_element(all(array));
    sum -= min;

    cout << sum << '\n';
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
