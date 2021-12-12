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
const ll mod = 1e9 + 7, inf = (1 << 30) - 1;
#define pb push_back
#define pp pop_back
#define mp make_pair
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    int n;
    cin >> n;
    vi B(n + 1), vect(n + 1), X(n + 1);
    vect[0] = inf, X[0] = -1;
    for (int i = 1; i <= n; i++){
        cin >> vect[i];
        B[i] = i - 1;
        while (vect[B[i]] <= vect[i])
            B[i] = B[B[i]];
        X[i] = X[B[i]] + 1;
    }
    cout << X[n] << '\n';
}
int main(){
    fast;

    int t;
    cin >> t;
    while (t--){
        solve();
    }

    return 0;
}
