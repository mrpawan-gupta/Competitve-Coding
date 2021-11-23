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

    int n;
    cin >> n;

    if (((n % 4) == 0) || ((n % 7) == 0) || ((n % 47) == 0) || ((n % 74) == 0) || ((n % 474) == 0) || ((n % 447) == 0) || ((n % 774) == 0) || ((n % 777) == 0) || ((n % 444) == 0) || ((n % 44) == 0) || ((n % 77) == 0) || ((n % 477) == 0))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    n = 0;

    return 0;
}                                           
