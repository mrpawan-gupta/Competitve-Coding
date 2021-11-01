#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
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

    int t;
    cin >> t;

    while(t--){
        ll k;
        cin >> k;

        ll s = 1;
        ll e = 10e9;
        int result = 0;
        while (s <= e)
        {
            ll mid = (s + e) / 2;
            if(mid*(mid+1)/2+1 <=k){
                result = mid + 1;
                s = mid + 1;
            }
            else{
                e = mid - 1;
            }
        }
        cout << 2 * result << '\n';
    }

    return 0;
}
