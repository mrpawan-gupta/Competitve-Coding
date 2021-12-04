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

    int x;
    cin >> x;

    int m[x], c[x], Mishka = 0, Cris = 0;
    for (int i = 1; i <= x; i++)
    {
        cin >> m[i] >> c[i];
        if (m[i] > c[i])
            Mishka++;
        else if (m[i] < c[i])
            Cris++;
    }

    if (Mishka > Cris)
        cout << "Mishka" << endl;
    else if (Mishka == Cris){
        cout << "Friendship is magic!^^" << endl;
    }
    else if (Mishka < Cris){
        cout << "Chris" << endl;
    }
    return 0;
}
