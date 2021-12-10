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
        int a, b;
        cin >> a >> b;

        int c = a + b;
        int ans = 0;
        
        while (c > 0){
            int rem = c % 10;
            if (rem == 1){
                ans = ans + 2;
            }
            else if (rem == 0 || rem == 6 || rem == 9){
                ans = ans + 6;
            }
            else if (rem == 2 || rem == 3 || rem == 5){
                ans = ans + 5;
            }
            else if (rem == 4){
                ans = ans + 4;
            }
            else if (rem == 7){
                ans = ans + 3;
            }
            else{
                ans = ans + 7;
            }
            c = c / 10;
        }
        cout << ans << endl;
    }

    return 0;
}
