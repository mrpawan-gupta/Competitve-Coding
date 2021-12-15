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
const ll mod = 1e9 + 7, inf = 1e18;
#define pb push_back
#define pp pop_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vi a(n);
        for (int i = 0; i < n; i++){
            cin >>  a[i];
        }

        int max = *max_element(all(a));
        bool c = true;

        for (int i = 0; i < n - 1; i++){
            if(a[i]!=a[i+1]){
                c = false;
            }
        }

        if(c){
            cout << 0 << endl;
            
        }
        else if(max == a[n-1]){
            cout << 1 << endl;
        }
        else{
            cout << 2 << endl;
        }
    }
    return 0;
}
