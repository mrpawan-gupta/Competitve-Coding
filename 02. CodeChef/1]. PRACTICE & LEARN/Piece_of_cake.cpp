#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma")
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using ld = long double;
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
const long long mod = 1e9 + 7, inf = 1e18;
const int Mod_N = 10e5 + 5;
#define PI 3.1415926535897932384626433832795l
#define arr array
#define loop(a, b, c) for (auto a = b; a < c; a++)
#define loopI(a, b, c, D) for (auto a = b; a >=c; a+=d)
#define pb push_back
#define pp pop_back
#define mp make_pair
#define F first
#define endl "\n"
#define S second
#define all(x) x.begin(), x.end()
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int check[27];
void solveTestCases(){
    string s;
    cin >> s;
    map<char, int> mp;
    for (int i = 0; i < s.length(); i++){
        mp[s[i]]++;
    }
    int total = 0;
    for (auto i : mp){
        total += i.second;
    }
    auto it = mp.begin();
    for (; it != mp.end(); it++){
        if (it->second == total / double(2)){
            cout << "YES\n";
            break;
        }
    }
    if (it == mp.end())
        cout << "NO\n";
}
int main(){
    fast;

    int t = 1;
    cin >> t;

    while(t--){
        solveTestCases();
    }

    return 0;
}
