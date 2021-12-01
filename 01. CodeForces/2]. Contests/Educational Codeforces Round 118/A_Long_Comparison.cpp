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
#define make_pair
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

        ll x1, p1, x2, p2;
        cin >> x1 >> p1 >> x2 >> p2;
        if (x1 != x2)
        {
            if (p1 == p2)
            {
                if (x1 > x2)
                    cout << ">"
                         << '\n';
                else
                    cout << "<"
                         << '\n';
            }
            else
            {
                ll t1 = log10(x1) + 1 + p1, t2 = log10(x2) + 1 + p2;
                if (t1 > t2){
                    cout << ">" << '\n';
                }
                else if (t1 < t2){
                    cout << "<" << '\n';
                }
                else
                {
                    string s = to_string(x1), p = to_string(x2);
                    ll sz = min(s.size(), p.size());
                    char c = '=';
                    for (ll i = 0; i < sz; i++)
                    {
                        if (s[i] > p[i])
                        {
                            c = '>';
                            break;
                        }
                        if (p[i] > s[i])
                        {
                            c = '<';
                            break;
                        }
                    }
                    if (c == '=')
                    {
                        if (s.size() > p.size())
                        {
                            for (auto i = sz; i < s.size(); i++)
                            {
                                if (s[i] != '0')
                                {
                                    c = '>';
                                    break;
                                }
                            }
                        }
                        else
                        {
                            for (auto i = sz; i < p.size(); i++)
                            {
                                if (p[i] != '0')
                                {
                                    c = '<';
                                    break;
                                }
                            }
                        }
                    }
                    cout << c << '\n';
                }
            }
        }
        else
        {
            if (p1 == p2)
                cout << "="
                     << '\n';
            else
            {
                if (p1 > p2)
                    cout << ">" << '\n';
                else
                    cout << "<" << '\n';
            }
        }
    }

    return 0;
}
