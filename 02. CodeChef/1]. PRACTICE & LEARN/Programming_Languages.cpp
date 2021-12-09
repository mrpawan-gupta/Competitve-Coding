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
        int a, a1, a2, b, b1, b2;
        cin >> a >> b >> a1 >> b1 >> a2 >> b2;

        if((a==a1 || a==b1)&& (b==b1 || b==a1)){
            cout << 1 << endl;
        }
        else if ((a == a2 || a == b2)&& (b==b2 || b==a2)){
            cout << 2 << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
    return 0;
}
