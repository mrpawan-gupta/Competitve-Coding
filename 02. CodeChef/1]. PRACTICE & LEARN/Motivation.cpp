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
        int n, x;
        cin >> n >> x;
        vector<int> m;

        for (int i = 0; i < n; i++){
            int z, y;
            cin >> z >> y;
            if(z <= x){
                m.push_back(y);
            }
        }
        sort(m.rbegin(), m.rend());
        cout << m[0] << endl;
    }

    return 0;
}
