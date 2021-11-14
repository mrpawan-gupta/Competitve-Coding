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

    int n, k;
    cin >> n >> k;

    int a[n];

    for (int i = 0; i < n; i++){
        cin >> a[i];
    }

    int x = 0;
    int j = n - 1;
    while(x <= j){
        x++;
        j--;
        if(a[x]==k || a[j]==k){
            cout << 1;
            return 0;
        }
    }
    cout << -1;

    return 0;
}
