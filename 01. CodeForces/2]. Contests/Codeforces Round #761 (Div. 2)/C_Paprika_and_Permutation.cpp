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

    int t;
    cin >> t;
    while (t--){
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        vector<ll> array(n + 1, 0);
        sort(a.begin(), a.end());
        ll sol = 0;
        multiset<ll> sa;
        for (int i = 0; i < n; i++){
            if (a[i] <= n){
                if (array[a[i]]){
                    sa.insert(a[i]);
                }
                else{
                    array[a[i]] = 1;
                }
            }
            else{
                sa.insert(a[i]);
            }
        }
        ll check = 1;
        for (int i = 1; i <= n; i++){
            if (!array[i]){
                ll p = *sa.begin();
                sa.erase(sa.begin());
                if (i >= (p + 1) / 2){
                    check = 0;
                    break;
                }
                if (p < i) {
                    check = 0;
                    break;
                }
                else {
                    sol++;
                }
            }
        }
        if (check) {
            cout << sol << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    return 0;
}