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
    string s;
    cin >> s;
    int upper(0), lower(0);
    for (size_t i = 0; i < s.length(); ++i)
    {
        if (isupper(s[i]))
        {
            upper += 1;
        }
        else
        {
            lower += 1;
        }
    }
    if (upper > lower)
    {
        for (size_t i = 0; i < s.length(); ++i)
        {
            s[i] = toupper(s[i]);
        }
    }
    else
    {
        for (size_t i = 0; i < s.length(); ++i)
        {
            s[i] = tolower(s[i]);
        }
    }
    cout << s << endl;
    return 0;
}