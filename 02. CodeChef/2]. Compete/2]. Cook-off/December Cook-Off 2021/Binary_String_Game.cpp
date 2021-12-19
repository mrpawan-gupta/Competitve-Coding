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

int dp[2005][2];
bool func(int val, int par)
{
    if (val == 0)
        return false;
    if (dp[val][par] != -1)
        return dp[val][par];
    bool ans = false;
    if (val >= 1)
        ans |= !func(val - 1, !par);
    if (val >= 2)
        ans |= !func(val - 2, !par);
    return dp[val][par] = ans;
}
void Solve(){
    int n, cnt = 0;
    string str1;
    cin >> n >> str1;
    for (auto i= 0; i < n + 1; i++){
        dp[i][0] = dp[i][1] = -1;
    }
    for(auto i = 0; i < n - 1; i++) {
        cnt += (str1[i] == str1[i + 1]);
    }
    cout << (func(cnt, 0) ? "JJ\n" : "Uttu\n");
}
int main(){
    fast;

    int t; // no of testcases
    cin >> t;

    while(t--){
        Solve();
    }

    return 0;
}

