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

ll n, k;
ll solveNum(vll &a, bool end){
    auto x = a;
    sort(x.begin(), x.end());
    ll res = 0;
    int ans = 1;
    while (x.size()){
        ll cnt = x.back();
        for (int i = 1; i <= k && x.size(); i++){
            x.pp();
        }
        if (ans == 1 && !end){
            res += cnt;
        }
        else{
            res += cnt * 2;
        }
        ans++;
    }
    return res;
}
ll checkNum(vll pos, vll neg){
    return solveNum(pos, true) + solveNum(neg, false);
}
int main(){
    fast;

    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        vll v(n);
        vll Negative, Positive;
        for (auto &element : v)
        {
            cin >> element;
            if (element <= 0){
                Negative.pb(abs(element));
            }
            else{
                Positive.pb(element);
            }
        }
        ll c1 = checkNum(Positive, Negative);
        ll c2 = checkNum(Negative, Positive);
        cout << min(c1, c2) << endl;
    }

    return 0;
}
