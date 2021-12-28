/*
 solution :- pawan gupta
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
#define ff first
#define endl "\n"
#define ss second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sum(x) accumulate(all(x), 0LL)
#define sb(x) __builtin_popcountll(x)
#define sz(x) (auto)(x).size()
#define make_unique(x) sort(all(x)); auto it = unique(all(x)); x.resize(it - x.begin())

template <typename T>istream &operator>>(istream &in, vector<T> &v){
    for (auto &i : v)in >> i;return in; }
template <typename A, typename B>istream &operator>>(istream &in, pair<A, B> &a){
    in >> a.first >> a.second;return in;}

int grid[100][100];
void solveTestCases()
{
    int n, m;
    cin >> n >> m;

    int inX, inY; // intial point
    cin >> inX >> inY;

    int finX, finY; // final points
    cin >> finX >> finY;

    int cnt = 0; //count of moves
    int st = 1, st2 = 1; // check track
    bool b = false;
    while (!b){
        if (inX == finX || inY == finY)
            break;
        if (inX + st > n || inX + st < 1)
            st *= -1;
        if (inY + st2 > m || inY + st2 < 1)
            st2 *= -1;
        inX += st;
        inY += st2;
        cnt++;
    }
    cout << cnt << endl;
}
int main(){
    fast;

    int t = 1;
    cin >> t;

    while (t--){
        solveTestCases();
    }

    return 0;
}