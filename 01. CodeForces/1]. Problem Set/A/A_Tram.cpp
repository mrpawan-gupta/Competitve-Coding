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

    int TramSize = 0;
    int check = 0;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        check -= a;
        check += b;
        TramSize = max(TramSize, check);
    }
    cout << TramSize;

    return 0;
}
