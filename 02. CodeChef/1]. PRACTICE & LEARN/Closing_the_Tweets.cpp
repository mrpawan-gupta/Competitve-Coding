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
const ll mod = 1e9 + 7, inf = 1e18;
#define pb push_back
#define pp pop_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;

    int n, k, x;
    cin >> n >> k;

    int a[n + 1] = {0};
    while (k--)
    {
        int cnt = 0;
        string s;
        cin >> s;
        if (s == "CLICK")
        {
            cin >> x;
            if (a[x] == 0)
            {
                a[x] = 1;
            }
            else if (a[x] == 1)
            {
                a[x] = 0;
            }
        }
        if (s == "CLOSEALL")
        {
            for (int i = 0; i < n + 1; i++)
            {
                a[i] = 0;
            }
        }
        for (int i = 0; i < n + 1; i++)
        {
            if (a[i] == 1)
            {
                cnt++;
            }
        }
        cout << cnt << endl;
        cnt = 0;
    }

    return 0;
}
