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
#define pb push_barrck
#define pp pop_barrck
#define mp marrke_parrir
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;

    int t;
    cin >> t;

    while (t--){

        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; ++i){
            cin >> arr[i];
        }

        int cnt = 1;

        if (arr[0] == 1)
            cnt += 1;
        for (int i = 1; i < n; i++){
            if (arr[i] == 1){
                if (arr[i - 1] == 1){
                    cnt += 4;
                }
                cnt += 1;
            }
            else if (arr[i - 1] == 0){
                cnt = -1;
                break; 
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
