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
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int zero = 0, ones = 0, ques = 0;
        vector<int> v;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                ones++;
            }
            else if (s[i] == '0')
            {
                zero++;
            }
            else
            {
                ques++;
                v.pb(i);
            }
        }
        if (zero == ones)
        {
            int c = v.size();
            int x = 0;
            while (x < c)
            {
                if (x % 2 == 0)
                {
                    s[v[x]] = '0';
                }
                else
                {
                    s[v[x]] = '1';
                }
                x++;
            }
        }

        else if (zero > ones)
        {
            int c = v.size();
            int x = 0;
            while (zero != ones && x < c)
            {
                s[v[x]] = '1';
                x++;
                ones++;
            }
            while (x < c)
            {
                if (x % 2 == 0)
                {
                    s[v[x]] = '0';
                }
                else
                {
                    s[v[x]] = '1';
                }
                x++;
            }
        }

        else
        {
            int c = v.size();
            int x = 0;
            while (zero != ones && x < c)
            {
                s[v[x]] = '0';
                x++;
                zero++;
            }
            while (x < c)
            {
                if (x % 2 == 0)
                {
                    s[v[x]] = '0';
                }
                else
                {
                    s[v[x]] = '1';
                }
                x++;
            }
        }
        cout << s << endl;
    }
    return 0;
}
