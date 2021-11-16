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

vi v;
set<int> s;

int pow(int x, int y)
{
    int res = 1;
    x = x % mod;
    if (x == 0)
        return 0;

    while (y > 0)
    {
        if (y & 1)
            res = ((res * x) % mod + mod) % mod;
        y = y >> 1;
        x = ((x * x) % mod + mod) % mod;
    }
    return res % mod;
}

void solve(int test)
{
    int n;
    cin >> n;
    for (auto it = s.begin(); it != s.end(); it++)
    {
        if (s.find(n - *it) != s.end())
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main(){
    fast;
    v.assign(201, true);
    for (int i = 2; i < 200; i++)
    {
        if (v[i])
            for (int j = i * i; j < 200; j += i)
                v[j] = false;
    }

    for (int i = 2; i < 200; i++)
    {
        if (v[i])
            for (int j = i + 1; j < 200; j++)
            {
                if (v[j])
                    s.insert(i * j);
            }
    }

    int t;
    cin >> t;
    while (t--)
    {
        solve(t);
    }
    return 0;
}