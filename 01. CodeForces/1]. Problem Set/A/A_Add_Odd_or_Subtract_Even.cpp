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
using mii = map<int, int>;
using mll = map<long long, long long>;
using umii = unordered_map<int, int>;
using umll = unordered_map<long long, long long>;
const long long mod = 1e9 + 7, inf = 1e18;
#define loop(a, b, c) for (auto a = b; a < c; a++)
#define pb push_back
#define pp pop_back
#define mp make_pair
#define F first
#define endl "\n"
#define S second
#define all(x) x.begin(), x.end()
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solveTestCases(){
    ll a, b;
    cin >> a >> b;

    ll ans = 0, cnt = 0;

    if (a == b){
        cout << 0 << endl;
        return;
    }
    if (a > b){
        cnt = a - b;
        ans++;
        if (cnt % 2 != 0){
            ans++;
        }
    }
    else if (a < b){
        cnt = b - a;
        ans++;
        if (cnt % 2 != 1){
            ans++;
        }
    }
    cout << ans << endl;
}
int main(){
    fast;

    int t;
    cin >> t;

    while(t--){
        solveTestCases();
    }

    return 0;
}
