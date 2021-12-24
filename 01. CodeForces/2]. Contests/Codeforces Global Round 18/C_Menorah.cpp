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
const ll mod = 1e9 + 7, inf = 1e18;
#define loop(a, b, c) for (auto a = b; a < c; a++)
#define pb push_back
#define pp pop_back
#define mp make_pair
#define F first
#define endl "" << endl
#define S second
#define all(x) x.begin(), x.end()
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solveTestCases(){
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int f = 0, g = 0, h = 0, z = 0;
    loop(i,0,n){
        if (a[i] == '1' && b[i] == '0')
            f++;
        if (a[i] == '0' && b[i] == '1')
            g++;
        if (a[i] == '0' && b[i] == '0')
            z++;
        if (a[i] == '1' && b[i] == '1')
            h++;
    }
    int ans = INT_MAX;
    if ((h + z) % 2 != 0 && h - z == 1){
        ans = min(ans, h + z);
    }
    if ((f + g) % 2 == 0 && f == g){
        ans = min(ans, f + g);
    }
    if (ans == INT_MAX){
        cout << -1 << endl;
    }
    else{
        cout << ans << endl;
    }
    return;
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
