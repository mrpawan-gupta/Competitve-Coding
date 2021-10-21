#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<long>;
using vvl = vector<vl>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
const ll mod = 1e9 + 7, inf = 1e18;
#define pd push_back
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

ll gcd(ll a , ll b){
    if(b == 0)
        return a;
    return gcd(b, a % b);
}

ll lcm (int a , int b){
    return (a / gcd(a, b)) * b;
}
int main(){
    fast;

    int t;
    cin >> t;

    while(t--){
        ll x, y;
        cin >> x >> y;

        ll n = x * y;

        cout << lcm(x, 2 * x) << " " << lcm(n - 1, n) << endl;
    }
    return 0;
}
