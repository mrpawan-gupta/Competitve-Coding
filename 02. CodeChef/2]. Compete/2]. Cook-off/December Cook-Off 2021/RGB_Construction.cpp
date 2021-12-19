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
using pii = pair<int, int>;
using pll = pair<long long, long long>;
using mii = map<int, int>;
using umii = unordered_map<int, int>;
const ll mod = 1e9 + 7, inf = 1e18;
#define pb push_back
#define pp pop_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define loop(i, j, k, in) for(int i = j; i < k; i += in)

void solveTestCase()
{
    int r, g, b, p = 0, q = 0;
    string s = "";
    cin >> r >> g >> b;
    if (b <= 1)
    {
        loop(i, 0, r, 1) cout << "R";
        loop(i, 0, g, 1) cout << "G";
        loop(i, 0, b, 1) cout << "B";
        cout << endl;
        loop(i, 0, r + g + b - 1, 1) cout << i + 1 << " " << i + 2 << endl;
    }
    else{
        s += "BRGB";
        b -= 2;
        r--;
        g--;
        while (b && g){
            s += "BG";
            b--;
            g--;
            p++;
        }
        while (b && r){
            s += "BR";
            b--;
            r--;
            q++;
        }
        if (b){
            cout << "-1\n";
            return;
        }
        loop(i, 0, r, 1) s += "R";
        loop(i, 0, g, 1) s += "G";
        cout << s << endl;
        cout << 1 << " " << 2 << endl;
        cout << 2 << " " << 3 << endl;
        cout << 3 << " " << 4 << endl;
        int check = 5;
        loop(i, 0, p, 1){
            cout << check << " " << check + 1 << endl;
            cout << 2 << " " << check + 1 << endl;
            check += 2;
        }
        loop(i, 0, q, 1){
            cout << check << " " << check + 1 << endl;
            cout << 3 << " " << check + 1 << endl;
            check += 2;
        }
        loop(i, 0, r + g, 1){
            cout << 1 << " " << check << endl;
            check++;
        }
    }
}


int main(){
    fast;

    int t;
    cin >> t;
    while (t--){
        solveTestCase();
    }

    return 0;
}