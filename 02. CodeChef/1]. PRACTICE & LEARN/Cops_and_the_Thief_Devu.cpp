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
#define endl "\n"
#define S second
#define all(x) x.begin(), x.end()
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solveTestCases(){
    int m, x, y;
    cin >> m >> x >> y;

    int cops[101]{0};
    loop(i,0,m){
        cin >> cops[i];
    }
    int dist = x * y;

    int count = 0;
    loop(i,1,101){
        bool safe = true;

        loop(j,0,m){
            int leftRange = cops[j] - dist;
            int rightRange = cops[j] + dist;

            if(i>=leftRange && i<=rightRange){
                safe = false;
            }
        }
        if(safe){
            count += 1;
        }
    }
    cout << count << endl;
}
int main(){
    fast;

    int t;
    cin >> t;
    while(t--){
        solveTestCases();
    }

    return 0;
}
