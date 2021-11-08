#include <bits/stdc++.h>
using namespace std;
using l = long;
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

    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;

    int ans = d;

    if (k == 1 || l == 1 || m == 1 || n == 1)
    {
        cout << d << endl;
        return 0;
    }

    for (int i = 1; i <= d; i++)
    {
        if(i%k!=0 && i%l!=0 && i%m!=0 && i%n!=0){
            ans--;
        }
    }
    cout << ans;
    return 0;
}
