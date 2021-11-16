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
        vector<int> v;
        int n, count = 0;
        cin >> n;
        if (n % 10 != 0){
            v.push_back(n % 10);
        }
        int ans = n % 10;
        n -= ans;
        if (n % 100 != 0){
            v.push_back(n % 100);
        }
        ans = n % 100;
        n -= ans;
        if (n % 1000 != 0){
            v.push_back(n % 1000);
        }
        ans = n % 1000;
        n -= ans;
        if (n % 10000 != 0){
            v.push_back(n % 10000);
        }
        if (n >= 10000 && n % 10000 == 0){
            v.push_back(n);
        }
        cout << v.size() << "\n";
        for (int i = 0; i < v.size(); i++){
            cout << v[i] << " ";
        }
    }

    return 0;
}
