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

void solve(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int cnt = 0; // Number of Subarray in which sum iis equal to product

    for (int i = 0; i < n; i++){
        int curr_sum = 0; // Sum of current subarray
        int curr_pro = 1; // Product of current subarray
        for (int j = i; j < n; j++){
            curr_sum = curr_sum + arr[j];
            curr_pro = curr_pro * arr[j];
            if(curr_pro == curr_sum){
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}
int main(){
    fast;

    int t;
    cin >> t;
    while(t--){
        solve();
    }

    return 0;
}
