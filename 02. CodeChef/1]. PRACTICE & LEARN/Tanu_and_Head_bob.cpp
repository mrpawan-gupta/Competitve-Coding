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

    int a, c, x;
    cin >> a;
    while (a--)
    {
        x = 0;
        string b;
        cin >> c >> b;
        for (int i = 0; i < c; i++)
        {
            if (b[i] == 'Y'){
                x = 1;
                cout << "NOT INDIAN" << endl;
                break;
            }
            else if (b[i] == 'I'){
                x = 1;
                cout << "INDIAN" << endl;
                break;
            }
        }
        if (x != 1){
            cout << "NOT SURE" << endl;
        }
    }

    return 0;
}
