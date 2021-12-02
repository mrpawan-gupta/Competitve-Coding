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

    int a, b, c, n, p;
    cin >> n >> a >> b >> c;

    for (int i = 0; i * a <= n; ++i)
    {
        for (int j = 0; i * a + j * b <= n; ++j)
        {
            int k = (n - i * a - j * b) / c;
            if (i * a + j * b + k * c == n)
                p = max(i + j + k, p);
        }
    }
    cout << p << "\n";

    return 0;
}
