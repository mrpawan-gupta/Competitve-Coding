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

    int i, j, t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n][n];
        for (int i = 0; i < n; i++)
        {
            for (j = 0; j <= i; j++)
            {
                cin >> a[i][j];
            }
        }
        for (int i = n - 2; i >= 0; i--)
        {
            for (j = 0; j <= i; j++)
            {
                if ((a[i][j] + a[i + 1][j]) > (a[i][j] + a[i + 1][j + 1]))
                    a[i][j] = a[i][j] + a[i + 1][j];
                else
                    a[i][j] = a[i][j] + a[i + 1][j + 1];
            }
        }
        cout << a[0][0] << endl;
    }

    return 0;
}
