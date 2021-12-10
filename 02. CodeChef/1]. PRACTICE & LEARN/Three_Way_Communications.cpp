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
        long long b[3], c[3], i = 0, d, e = 3;
        cin >> d;
        while (e--)
        {
            cin >> b[e] >> c[e];
        }
        if (sqrt(pow(b[0] - b[1], 2) + pow(c[0] - c[1], 2)) <= d)
            i++;
        if (sqrt(pow(b[0] - b[2], 2) + pow(c[0] - c[2], 2)) <= d)
            i++;
        if (sqrt(pow(b[2] - b[1], 2) + pow(c[2] - c[1], 2)) <= d)
            i++;

        if (i >= 2)
            cout << "yes" << endl;
        else
            cout << "no" << endl;
    }

    return 0;
}
