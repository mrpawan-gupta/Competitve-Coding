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

    while (t--){
        int n;
        cin >> n;

        int arr[n];

        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        sort(arr, arr + n);

        int check = 0;

        for (int i = 1; i < n; i++){
            if(arr[i]!=arr[0]){
                check = n - i;
                break;
            }
        }
        cout << check << endl;
    }

    return 0;
}
