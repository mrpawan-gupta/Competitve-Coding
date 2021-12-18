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
using mii = map<int, int>;
using umii = unordered_map<int, int>;
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

    ll t;
    cin >> t;

    vll array;

    while(t--){
        ll q, x, y;

        cin >> q;
        if(q==1){
            cin >> x;
            array.pb(x);
        }
        else{
            cin >> x;
            cin >> y;

            replace(all(array), x, y);
        }
    }

    for(auto j=0; j<array.size(); j++){
        cout << array[j] << " ";
    }

    return 0;
}
