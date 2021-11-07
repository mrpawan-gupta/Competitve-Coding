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

    string s;
    cin >> s;
    string t;
    cin >> t;

    int k = s.length();
    int l = t.length();

    for (int i = 0, j = l - 1; i < k, j >= 0; i++, j--)
    {
        if (s[i] != t[j])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}
