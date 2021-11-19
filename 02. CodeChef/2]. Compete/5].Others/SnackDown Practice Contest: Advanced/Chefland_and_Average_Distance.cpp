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
int t, m, n, ans[605], i, j, k, mat[1505][1505], ltr[1505][1505], rtl[1505][1505];

int main()
{
    fast;

    int offset = 600;
    char c[305][305];
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        for (i = 1; i <= 1500; i++)
        {
            for (j = 1; j < 1500; j++)
            {
                rtl[i][j] = ltr[i][j] = mat[i][j] = 0;
            }
        }
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= m; j++)
            {
                cin >> c[i][j];
            }
        }
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= m; j++)
            {
                mat[i + offset][j + offset] = c[i][j] - '0';
            }
        }

        for (i = 1; i <= 1500; i++)
        {
            for (j = 1; j < 1500; j++)
            {
                rtl[i][j] = rtl[i - 1][j + 1] + mat[i][j];
                ltr[i][j] = ltr[i - 1][j - 1] + mat[i][j];
            }
        }

        for (i = 1 + offset; i <= n + offset; i++)
        {
            for (j = 1 + offset; j <= m + offset; j++)
            {
                if (c[i - offset][j - offset] == '1')
                {
                    for (k = 1; k <= n + m - 2; k++)
                    {
                        ans[k] += ((rtl[i][j - k] - rtl[i - k][j]) + (rtl[i + k][j] - rtl[i][j + k]) + (ltr[i][j + k] - ltr[i - k - 1][j - 1]) + (ltr[i + k - 1][j - 1] - ltr[i][j - k]));
                    }
                }
            }
        }

        for (i = 1; i <= n + m - 2; i++)
        {
            int nans = ans[i] / 2;
            cout << nans << " ";
            ans[i] = 0;
        }
        cout << endl;
    }
    return 0;
}