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

    int t, n, a[10000];
    cin >> t;
    while (t--){
        long long int ans = 0, sum1 = 0, sum2 = 0;
        int div = 0;
        cin >> n;
        int k = 0;
        for (int i = 1; i <= n; i++){
            a[k++] = pow(2, i);
        }
        div = n / 2;
        sum1 = a[n - 1];
        for (int i = 0; i <= div - 2; i++){
            sum1 += a[i];
        }
        for (int i = div - 1; i < n - 1; i++){
            sum2 += a[i];
        }
     
        ans = abs(sum1 - sum2);
        cout << ans << endl;
    }

    return 0;
}
