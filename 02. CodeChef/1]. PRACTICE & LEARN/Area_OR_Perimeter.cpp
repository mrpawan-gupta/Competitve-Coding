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

    int l, b;
    cin >> l >> b;

    int area = l * b;
    int peri = 2 * (l + b);
    if (area > peri)
    {
        cout << "Area" << endl;
        cout << area;
    }
    else if (area < peri)
    {
        cout << "Peri" << endl;
        cout << peri;
    }
    else
    {
        cout << "Eq" << endl;
        cout << area;
    }

    return 0;
}
