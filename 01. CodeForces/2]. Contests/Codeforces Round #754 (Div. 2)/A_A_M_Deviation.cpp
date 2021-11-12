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

    int t;
    cin >> t;

    while(t--){
        int a[3];

        for (int i = 0; i <3 ; i++){
            cin >> a[i];
        }

        int d = abs(a[0] + a[2] - (2 * a[1]));
        d = d % 3;

        if(d==2){
            d = 1;
        }
        cout << (d % 3) << "\n";
    }

    return 0;
}
