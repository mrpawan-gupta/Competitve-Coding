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
        int n, k;
        cin >> n >> k;
        vi v;

        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (i == 0){
                v.pb(x);
            }
            else if (x != v.back()){
                v.pb(x);
            }
        }

        n = v.size();

        int c = 0;
        for (int i = 0; i < n - 1; i++) {
            if (v[i] != v[i + 1]){
                c++;
            }
        }

        vi a(k + 1, c);
        for (int i = 0; i < n; i++){
            if (i + 1 < n){
                a[v[i]]--;
            }
            if (i - 1 >= 0){
                a[v[i]]--;
            }
            if (i - 1 >= 0 && i + 1 < n && v[i + 1] != v[i - 1]){
                a[v[i]]++;
            }
        }

        for (int i = 1; i <= k; i++){
            cout << a[i] << " ";
        }
        cout << "\n";
    }

    return 0;
}
