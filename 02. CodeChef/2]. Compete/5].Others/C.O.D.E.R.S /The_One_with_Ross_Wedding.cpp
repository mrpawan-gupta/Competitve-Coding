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
        ll n, p, q;
        cin >> n >> p >> q;
        string s;
        cin >> s;
        int ans = 0, result = 0;
        ll i, j, k;
        ll c1 = 0, c2 = 0;
        for (i = 0; i < n; i++)
        {
            if (s[i] == 49)
                ;
            if (s[i] == 48)
            {
                result ^= 1;
            }
            if (!result)
            {
                if (c1 <= p)
                    c1 += 1;
                else
                    c1 -= 1;
            }
            else if (result)
            {
                if (c2 <= q)
                    c2 += 1;
                else
                    c2 -= 1;
            }
            else
                continue;
        }
        if (c1 == p && c2 == q){
            ans = 1;
        }
        result = 1;
        i = 0;
        c1 = 0, c2 = 0;
        for (i = 0; i < n; i++)
        {
            if (s[i] == 48)
                result ^= 1;
            if (!result)
            {
                if (c1 <= p)
                    c1 += 1;
                else
                    c1 -= 1;
            }
            else if (result)
            {
                if (c2 <= q)
                    c2 += 1;
                else
                    c2 -= 1;
            }
            else{
                continue;
            }
        }
        if (c1 == p && c2 == q){
            ans = 1;
        }
        if (ans){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }

    return 0;
}
