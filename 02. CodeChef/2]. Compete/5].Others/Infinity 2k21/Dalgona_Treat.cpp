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
using mll = map<long long, long long>;
using umii = unordered_map<int, int>;
using umll = unordered_map<long long, long long>;
const ll mod = 1e9 + 7, inf = 1e18;
#define loop(a, b, c) for (auto a = b; a < c; a++)
#define pb push_back
#define pp pop_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solveTestcases(){
    int n;
    cin >> n;
    if (n == 1){
        cout << 1 << endl;
        cout << 1 << " " << 1 << endl;
    }
    else if (n == 2){
        cout << 2 << endl;
        cout << 3 << " " << 1 << endl;
        cout << 4 << " " << 1 << endl;
    }
    else if (n == 3){
        cout << 2 << endl;
        cout << 2 << " " << 2 << endl;
        cout << 1 << " " << 1 << endl;
    }
    else if (n == 4){
        cout << 1 << endl;
        cout << 1 << " " << 4 << endl;
    }
    else if (n % 2 == 0){
        cout << 2 << endl;
        cout << 1 << " " << n - 1 << endl;
        cout << (((n - 1) - 3) / 2) + 1 << " " << 1 << endl;
    }
    else{
        cout << 3 << endl;
        cout << ((n - 3) / 2) + 2 << " " << 1 << endl;
        cout << 2 << " " << 1 << endl;
        cout << 1 << " " << n - 2 << endl;
    }
}
int main(){
    fast;

    int t;
    cin >> t;
    while(t--){
        solveTestcases();
    }

    return 0;
}
