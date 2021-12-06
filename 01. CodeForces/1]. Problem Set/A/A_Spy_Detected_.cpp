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

    int n;
    cin >> n;
    while (n--){
        int n;
        cin >> n;
        vector<int> v(n);
        for (int &e : v){
            cin >> e;
        }
        vector<int> a = v;
        sort(a.begin(), a.end());
        for (int i = 0; i < n; i++){
            if (v[i] != a[1]){
                cout << i + 1 << "\n";
            }
        }
    }

    return 0;
}
