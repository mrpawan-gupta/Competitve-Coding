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

    int n, l, r;
    cin >> n >> l;
    int p[n];

    for (int i = 0; i < n; i++)
        cin >> p[i];

    sort(p, p + n);
    r = max(p[0], l - p[n - 1]) * 2;

    for (int i = 0; i < n - 1; i++)
        r = max(r, p[i + 1] - p[i]);

    cout.precision(20);
    cout << fixed << r / 2.0 << endl;

    return 0;
}
