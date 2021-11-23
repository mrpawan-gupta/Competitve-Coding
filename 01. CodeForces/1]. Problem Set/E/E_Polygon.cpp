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

        bool a[50][50];

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                char c;
                cin >> c;
                a[i][j] = c - '0';
            }
        }

        bool ans = true;
        for (int i = n - 2; i >= 0; --i)
        {
            for (int j = n - 2; j >= 0; --j)
            {
                if (a[i][j] && !a[i + 1][j] && !a[i][j + 1])
                {
                    ans = false;
                }
            }
        }

        cout << (ans ? "YES" : "NO") << endl;
    }

    return 0;
}
