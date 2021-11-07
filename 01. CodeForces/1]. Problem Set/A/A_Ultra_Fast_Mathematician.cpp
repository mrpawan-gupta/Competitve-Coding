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

    string s1, s2;
    cin >> s1 >> s2;

    int n;

    (s1 > s2) ? n = s1.length() : n = s2.length();

    string res = "";
    for (int i = 0; i < n; i++)
    {
        if (s1[i] == s2[i])
        {
            res.pb('0');
        }
        else
        {
            res.pb('1');
        }
    }

    cout << res << endl;
    return 0;
}
