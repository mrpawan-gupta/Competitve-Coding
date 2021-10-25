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
        ll n, c;
        cin >> n >> c;

        vector<ll> arr(n);

        for (ll i = 0; i < n; i++){
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        ll L = 0;
        ll R = 0;

        for (ll i = 0; i < n; i++){
            if(arr[i]<c){
                if((c&1)==(arr[i]&1)){
                    L = i + 1;
                }
            }
            else{
                break;
            }
        }

        for (ll i = n-1; i >= 0; i--){
            if(arr[i]>c){
                if((c&1)==(arr[i]&1)){
                    R = n - i;
                }
            }
            else{
                break;
            }
        }

        cout << n - (L + R) << " " << (L + R == 0 ? 1 : -1) << "\n";
        
    }

    return 0;
}
