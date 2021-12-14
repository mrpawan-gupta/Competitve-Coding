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
    vll v(7);
    for (ll i = 0; i < 7; i++){
        cin >> v[i];
    }
    cout << v[0] << " " <<v[1] << " ";
    if (v[2] !=v[0] +v[1]){
        cout <<v[2];
    }
    else{
        cout <<v[3];
    }
    cout << endl;
}
int main(){
    fast;

    int t;
    cin >> t;

    while(t--){
        Solution();
    }

    return 0;
}
