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
using umii = unordered_map<int, int>;
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

    // no of test casess
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vll arr(n);
        // input array

        for (auto i = 0; i < n; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        
        // subset medians
        cout << arr[n / 2] - arr[n / 2 - 1] << endl;
    }

    return 0;
}
