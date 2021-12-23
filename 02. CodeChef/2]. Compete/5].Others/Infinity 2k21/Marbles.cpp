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

bool isvowel(char c)
{
    if (c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u')
    {
        return true;
    }
    return false;
}
void solveTestcases()
{
    int n;
    cin >> n;

    string s, p;
    cin >> s >> p;

    int ans = INT_MAX;
    loop(i, 0, 26)
    {
        int Check = 0;
        char ch = i + 'a';
        loop(j, 0, n)
        {
            char char1 = (s[j] == '?') ? ch : s[j];
            char char2 = (p[j] == '?') ? ch : p[j];
            if (char1 != char2)
            {
                if (isvowel(char1) && isvowel(char2))
                {
                    Check += 2;
                }
                else if (isvowel(char1) == false && isvowel(char2) == false)
                {
                    Check += 2;
                }
                else
                {
                    Check++;
                }
            }
        }

        ans = min(ans, Check);
    }
    cout << ans << endl;
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
