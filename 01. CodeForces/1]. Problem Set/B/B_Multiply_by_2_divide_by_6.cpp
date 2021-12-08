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

int main(){
    fast;

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        bool b = true;
        int c = 0;
        while (n > 1){
            if (n % 6 == 0){
                n = n / 6;
                c++;
            }
            else{
                if (n % 3 == 0){
                    n = n * 2;
                    c++;
                }
                else{
                    b = false;
                    break;
                }
            }
        }
        if(b){
            cout << c << endl;
        }
        else{
            cout << "-1" << endl;
        }
    }

    return 0;
}
