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

void Solution(){

    ll n;
    cin >> n;
    vll a(n);
    for (auto i = 0; i < n; i++){
        cin >> a[i];
    }
    ll odd = a[0], even = a[1];
    for(int i = 0; i < n; i += 2){
        odd = __gcd(odd, a[i]);
    }
    for(int i = 1; i < n; i += 2){
        even = __gcd(even, a[i]);
    }
    bool isTrue = 1;
    for(int i = 1; i < n; i += 2){
        if (a[i] % odd == 0){
            isTrue = false;
        }
    }
    if (isTrue)
        cout << odd << endl;
    else{
        isTrue = 1;
        for(int i = 0; i < n; i += 2){
            if (a[i] % even == 0)
                isTrue = 0;
        }
        if(isTrue){
            cout << even << endl;
        }
        else{
            cout << 0 << endl;
        }
    }
}

int main(){
    fast;
    int t;
    cin >> t;
    while (t--){
        Solution();
    }
    return 0;
}

