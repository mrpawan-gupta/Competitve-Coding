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
const ll mod = 1e9 + 7, inf = 1e18;
#define pb push_back
#define pp pop_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;

    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        ll k, c = 0, cnt = n;

        while (n){
            c++;
            n /= 2;
        }
        ll ans = 1;
        for (int i = 1; i <= c; i++){
            ans = (ans * 2) % mod;
        }
        double d = cnt;
        if (ceil(log2(d)) == floor(log2(d))){
            ans--;
        }
        if (cnt == 1){
            cout << 1 << endl;
        }
        else if (cnt == 2){
            cout << 2 << endl;
        }
        else{
            cout << (ans) % mod << endl;
        }
    }

    return 0;
}
