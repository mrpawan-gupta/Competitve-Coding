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

    int n, a;
    vi v1, v2, v3;
    cin >> n;
    for (int i = 1; i <= n; ++i)
    {
        cin >> a;
        if (a == 1)
        {
            v1.push_back(i);
        }
        else if (a == 2)
        {
            v2.push_back(i);
        }
        else
        {
            v3.push_back(i);
        }
    }
    int mn = min(min(v1.size(), v2.size()), v3.size());
    cout << mn << endl;
    for (int i = 0; i < mn; ++i)
    {
        cout << v1[i] << " " << v2[i] << " " << v3[i] << endl;
    }

    return 0;
}
