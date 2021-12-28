/*
    solution by :- pawa Gupta
*/

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
#define rall(x) x.rbegin(), x.rend()
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sum(x) accumulate(all(x), 0LL)
#define sb(x) __builtin_popcountll(x)
#define sz(x) (auto)(x).size()
#define make_unique(x) sort(all(x)); auto element = unique(all(x)); x.resize(element - x.begin())

template <typename T>istream &operator>>(istream &in, vector<T> &v){
    for (auto &i : v)in >> i;return in; }
template <typename A, typename B>istream &operator>>(istream &in, pair<A, B> &a){
    in >> a.first >> a.second;return in;}

const int checkN = 1e3 + 5; // max size of pair
int n;
map<pair<int, int>, bool> Map;
pair<int, int> a[checkN];
map<pair<int, int>, int> verfied;

void checkPair(int u, int v){
    if (u == v){
        verfied[{u, v}] = u;
        return;
    }
    for (int i = u; i <= v; i++){
        if (i == u){
            if (Map[{i + 1, v}]){
                verfied[{u, v}] = i;
                checkPair(i + 1, v);
                break;
            }
        }
        else if (i == v) {
            if (Map[{u, i - 1}]) {
                verfied[{u, v}] = i;
                checkPair(u, i - 1);
                break;
            }
        }
        else {
            if (Map[{u, i - 1}] && Map[{i + 1, v}]) {
                verfied[{u, v}] = i;
                checkPair(u, i - 1);
                checkPair(i + 1, v);
                break;
            }
        }
    }
}
void solveTestCases(){
    cin >> n;
    Map.clear();
    verfied.clear();
    int u = 1, v = n;
    loop(i, 0, n){
        cin >> a[i].F >> a[i].S;
        Map[{a[i].F, a[i].S}] = true;
    }
    checkPair(u, v);
    for (auto element : Map){
        if (verfied[element.F])
            cout << element.F.F << " " << element.F.S << " " << verfied[element.F] << endl;
    }
    cout << endl;
}
int main()
{
    fast;

    int t = 1;
    cin >> t;

    while (t--){
        solveTestCases();
    }

    return 0;
}
