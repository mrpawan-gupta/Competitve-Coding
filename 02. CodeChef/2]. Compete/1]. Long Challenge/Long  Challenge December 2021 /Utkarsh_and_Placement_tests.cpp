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

    while(t--){
        char a, b, c, e, f;
        cin >> a >> b >> c >> e >> f;
        int lp1 = 0;
        int lp2 = 0;

        if (e == a)
        {
            lp1 = 3;
        }
        else if (e == b)
        {
            lp1 = 2;
        }
        else
        {
            lp1 = 1;
        }
        if (f == a)
        {
            lp2 = 3;
        }
        else if (f == b)
        {
            lp2 = 2;
        }
        else
        {
            lp2 = 1;
        }

        if (lp1 > lp2)
        {
            cout << e << endl;
        }
        else
        {
            cout << f << endl;
        }
    }

    return 0;
}
