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
using umii = unordered_map<int, int>;
const ll mod = 1e9 + 7, inf = 1e18;
#define pb push_back
#define pp pop_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
int pr[5 << 17];
int Q;
int t[5 << 17], x[5 << 17], y[5 << 17];
int ans[5 << 17];
int main(){
    fast;
    int len = 0;
    for (int i = 0; i < Q; i++){
        cin >> t[i] >> x[i];
        if (t[i] == 2)
            cin >> y[i];
        else
            len++;
    }
    for (int i = 1; i < 5 << 17; i++){
        pr[i] = i;
    }
    int n = len;
    for (int i = Q; i--;){
        if (t[i] == 1){
            len--;
            ans[len] = pr[x[i]];
        }
        else{
            pr[x[i]] = pr[y[i]];
        }
    }
    for (int i = 0; i < n; i++){
        cout << ans[i] << (i + 1 == n ? "\n" : " ");
    }
    
    return 0;
}