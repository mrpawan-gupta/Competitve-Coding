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

    int n, m;
    cin >> n >> m;

    bool is = true;

    for (int i = 1; i <= n; i++){
        if(i%4==2){
            for (int j = 1; j < m; j++){
                cout << '.';
            }
            cout << '#';
        }
        else if(i%4==0){
            cout << "#";
            for (int i = 1; i < m; i++){
                cout << '.';
            }
        }
        else{
            for (int i = 1; i <= m; i++)
            {
                cout << '#';
            }
        }
        cout << '\n';
    }

    return 0;
}
