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
        ll n, k;
        cin >> n >> k;

        ll flag = 1;
        ll check = 0;

        while(flag<=k && flag<n){
            flag *= 2;
            check++;
        }
        if(flag<n){
            check += (n - flag + k - 1) / k;
        }
        cout << check << "\n";
    }

    return 0;
}
