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
using mll = map<long long, long long>;
using umii = unordered_map<int, int>;
using umll = unordered_map<long long, long long>;
const long long mod = 1e9 + 7, inf = 1e18 + 123;
#define loop(a, b, c) for (auto a = b; a < c; a++)
#define pb push_back
#define pp pop_back
#define mp make_pair
#define F first
#define eendl "\n"
#define S second
#define all(x) x.begin(), x.end()
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

vector<pll> v;

bool check(ll l, ll r){

    int k = upper_bound(all(v), mp(l, inf)) - v.begin();
    if(k < v.size()){
        if (max(l, v[k].F) <= min(v[k].S, r)){
            return 1;
        }
        if (max(l, v[k].F) <= min(v[k].S, r)){
            return 1;
        }
    }
    if(k){
        k--;
        if (max(l, v[k].F) <= min(v[k].S, r)){
            return 1;
        }
        if (max(l, v[k].F) <= min(v[k].S, r)){
            return 1;
        }
    }
    return 0;
}

void solveTestcases(){
    int n;
    ll a, b;
    cin >> n >> a >> b;

    ll last = -1;
    ll k = -1;

    for (ll i = 0; i <= b - a + 1; i++){
        ll L = i * a + (i - 1) * i / 2;
        ll R = i * b - (i - 1) * i / 2;

        if (L <= last){
            k = i;
            break;
        }
        v.pb({L, R});
        last = R;
    }
    if (~k){
        v.pp();
        ll L, R;
        k--;
        L = k * a + (k - 1) * k / 2;
        k = (b - a + 1) - k;
        R = k * b - (k - 1) * k / 2;
        v.pb({L, R});
        while (k < b - a + 1)
        {
            k++;
            L = k * a + (k - 1) * k / 2;
            R = k * b - (k - 1) * k / 2;
            v.pb({L, R});
        }
    }
    sort(all(v));
    // for (pll p : v) cout << p.x << " " << p.y << eendl;
    map<ll, int> ev;
    while (n--){
        ll l, r;
        cin >> l >> r;
        ev[l]++;
        ev[r + 1]--;
    }

    int mx = 0, cnt = 0;
    last = 0;
    for (pair<ll, int> p : ev){
        //  cout << last << " " << p.x-1 << " " << cnt << eendl;
        if (check(last, p.F - 1)){
            mx = max(mx, cnt);
        }
        cnt += p.S;
        last = p.F;
    }
    cout << mx << endl;
    v.clear();
}

int main(){
    fast;

    int t = 1;
    cin >> t;
    
    while(t--){
        solveTestcases();
    }

    return 0;
}