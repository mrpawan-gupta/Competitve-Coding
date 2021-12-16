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

bool coprime(int a, int b){
    return (__gcd(a, b) == 1);
}

void _NumSum(int n){

    int mid = n / 2;

    for (int i = mid; i >= 1; i--){
        if (coprime(i, n - i) == 1){
            cout << i << " " << n - i;
            break;
        }
    }
}
int main(){
    fast;

    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        ll a, b, c;
        c = 1;
        _NumSum(n - 1);
        cout << " " << c << endl;
    }

    return 0;
}
