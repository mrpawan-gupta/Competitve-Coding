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
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int main()
{
    fast;

    int t;
    cin >> t;

    while (t--){
        int a[3], b[3];
        int a1 = 0, b1 = 0, a0 = 0, b0 = 0;
        for (int i = 0; i < 3; i++){
            cin >> a[i] >> b[i];
            if(a[i]==1){
                a1++;
            }
            else{
                a0++;
            }
        }
        for (int i = 0; i < 3; i++){
            cin >>  b[i];
            if (b[i] == 1){
                b1++;
            }
            else{
                b0++;
            }
        }
        if (a1 == b1 and a0 == b0){
            cout << "Pass" << endl;
        }
        else
        {
            cout << "Fail" << endl;
        }
    }
    return 0;
}
