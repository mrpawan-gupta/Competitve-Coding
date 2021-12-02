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
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
int arr[10000000];
int main()
{
    int i, j;
    arr[0] = arr[1] = 1;
    for (i = 2; i * i <= 10000000; i++)
    {
        if (arr[i] == 0)
        {
            for (j = 2; i * j <= 10000000; j++)
            {
                arr[i * j] = 1;
            }
        }
    }
    int n, t;
    cin >> n;
    long long int in;
    for (int i = 0; i < n; i++)
    {
        cin >> in;
        t = sqrt(in);
        if (t == sqrt(in) && arr[t] == 0)
        {
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }

    return 0;
}
