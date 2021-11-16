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

int main(){
    fast;

    int t, n;
    string s;
    int ans = 0, temp, c;
    unordered_map<string, int> a;
    cin >> t;
    while (t--)
    {
        cin >> n;
        ans = 0;
        for (int i = 0; i < n; i++)
        {
            temp = 0;
            c = 1;
            cin >> s;
            if (a.find(s) != a.end())
            {
                ans += a[s] / 2;
                continue;
            }
            temp += 2;
            if (s[0] == 'd' || s[0] == 'f')
                c = 0;
            for (int i = 1; i < s.length(); i++)
            {
                if ((s[i] == 'd' || s[i] == 'f'))
                {
                    if (c == 0)
                        temp += 4;
                    else
                        temp += 2;
                    c = 0;
                }
                else
                {
                    if (c == 0)
                        temp += 2;
                    else
                        temp += 4;
                    c = 1;
                }
            }
            a[s] = temp;
            ans += temp;
        }
        cout << ans << endl;
        a.clear();
    }
    return 0;
}
