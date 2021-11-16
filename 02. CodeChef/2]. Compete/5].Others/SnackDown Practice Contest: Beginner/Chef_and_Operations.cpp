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

    int t;
    cin >> t;

    while (t--)
    {
        vector<int> v;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        bool b = true;
        int i = 0;
        for (i = 0; i < n - 2; i++)
        {

            int x;
            cin >> x;
            int d = x - v[i];
            if (d < 0){
                b = false;
            }
            v[i] += (1 * d);
            v[i + 1] += (2 * d);
            v[i + 2] += (3 * d);
            if (v[i] != x){
                b = false;
            }
        }
        int x;
        cin >> x;
        if (v[i] != x){
            b = false;
        }
        i++;
        cin >> x;
        if (v[i] != x){
            b = false;
        }
        if (!b){
            cout << "NIE" << endl;
        }
        else{
            cout << "TAK" << endl;
        }
    }

    return 0;
}
