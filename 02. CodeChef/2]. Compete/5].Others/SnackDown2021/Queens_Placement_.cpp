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
        int n;
        cin >> n;

        char arr[n][n];
        int noQueen = n - 2;

        for (int i = n; i>=1;i--){
            for (int j = 1; j <= n;j++){
                if(i==j&&j!=1&&j!=3){
                    cout << "Q";
                }
                else{
                    cout << ".";
                }
            }
            cout << "\n";
        }
    }

    return 0;
}
