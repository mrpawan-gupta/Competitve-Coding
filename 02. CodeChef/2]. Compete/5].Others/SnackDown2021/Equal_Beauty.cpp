#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<long>;
using vvl = vector<vl>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
const ll mod = 1e9 + 7, inf = 1e18;
#define pb push_back
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;

    ll t;  
    cin >> t;  
    while (t--){
        ll n, k, ans1 = 0, ans2 = 0, d1, d2;
        ll m = INT_MAX;

        cin >> n;

        vl a(n);

        for (ll i = 0; i < n;i++){
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        ll x = 1, r = n - 2;
        if(n==2){
            cout << 0 << '\n';
            continue;
        }
        else if(n==3){
            cout << min(a[1] - a[0], a[2] - a[1]) << endl;
            continue;
        }

        for (ll i = 0; i < n-1; i++)
        {
            ans1 += abs(a[i] - a[(n - 1)/2] );
        }
        for (ll i = 1; i < n;i++){
            ans2 += abs(a[i] - a[1 + (n - 1) / 2]);
        }
        m = min(ans1, ans2);

        while (x<r)
        {
            d2 = a[n - 1] - a[x];
            d1 = a[r] - a[0];
            m = min(m, abs(d1 - d2));
            if (d1 < d2)
            {
                x++;
            }
            else
                r--;
        }
        cout << m << '\n';
    }
    return 0;
}
