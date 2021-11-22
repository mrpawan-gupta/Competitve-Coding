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

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int rem[3] = {0};
        for (int i = 0; i < n; i++){
            int x;
            cin >> x;
            rem[x % 3]++;
        }

        if((rem[1]*1+rem[2]*2)%3){
            cout << -1 << '\n';
        }
        else{
            // compute the minimum operations
            int ans = 0;
            int temp = min(rem[1], rem[2]);
            ans += temp;
            // the remaining number will have rem ->1 , rem ->2;

            rem[1] -= temp;
            rem[2] -= temp;

            ans += 2 * (rem[1] / 3 + rem[2] / 3);
            cout << ans << endl;
        }
    }

    return 0;
}
