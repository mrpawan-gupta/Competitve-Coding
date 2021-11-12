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

    int value = 0;
    ll priceMade = 0;
    int k, r;
    cin >> k >> r;
    bool flag = 1;
    while (flag)
    {
        if ((priceMade % 10 == 0 && priceMade != 0) || priceMade % 10 == r)
        {
            break;
        }
        ++value;
        priceMade += k;
    }

    cout << value;

    return 0;
}
