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
#define loopI(a, b, c, d) for (auto a = b; a >=c; a+=d)
#define loopD(a, b, c, d) for (auto a = b; a >=c; a-=d)
#define pb push_back
#define pp pop_back
#define mp make_pair
#define F first
#define endl "\n"
#define S second
#define all(x) x.begin(), x.end()
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solveTestCases(){
    int a, b;
    cin >> a >> b;
    vector<string> v;
    loop(i,1,a+1){
        string x;
        cin >> x;
        v.push_back(x);
    }
    map<string, int> m;
    while (b--){
        int input;
        cin >> input;
        loop(i,1,input+1){
            string s;
            cin >> s;
            m[s]++;
        }
    }
    for (auto value : v){
        int count = 0;
        for (auto value2 : m){
            if (value == value2.first)
                count++;
        }
        if (count == 1){
            cout << "YES" << " ";
        }
        else{
            cout << "NO" << " ";
        }
    }
    cout << endl;
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
