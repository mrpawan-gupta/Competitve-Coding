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

    int a;
    cin >> a;
    while (a--)
    {
        float c;
        long b, d;
        cin >> b >> c >> d;
        if (b > 50 && c < 0.7 && d > 5600)
            cout << 10 << endl;
        else if (b > 50 && c < 0.7)
            cout << 9 << endl;
        else if (c < 0.7 && d > 5600)
            cout << 8 << endl;
        else if (b > 50 && d > 5600)
            cout << 7 << endl;
        else if (b > 50 || c < 0.7 || d > 5600)
            cout << 6 << endl;
        else
            cout << 5 << endl;
    }

    return 0;
}
