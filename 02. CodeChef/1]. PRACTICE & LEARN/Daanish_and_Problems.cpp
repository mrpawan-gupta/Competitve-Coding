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
const ll mod = 1e9 + 7, inf = 1e18;
#define pb push_back
#define pp pop_back
#define mp make_pair
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;

    int t, k, i;
    cin >> t;
    while (t--){
        int a[10];
        int sum = 0;
        for (i = 0; i < 10; i++){
            cin >> a[i];
            sum += a[i];
        }
        cin >> k;

        for (i = 8; i >= 0; i--){
            a[i] += a[i + 1];
        }

        for (i = 9; a[i] <= k; i--);

        cout << i + 1 << "\n";
    }

    return 0;
}
