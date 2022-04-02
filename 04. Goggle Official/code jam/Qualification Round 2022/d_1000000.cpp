/*
    Solution By :- Pawan Gupta [ CF - Mr.pawan_gupta, CC - mrpavan_gupta ]
*/
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx")
#include <bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
using namespace std;
// using namespace __gnu_pbds;

/*------ TypeDef Micro's -------*/
using ll = long long;
using li = long int;
using ld = long double;
using lli = long long int;
using vb = std::vector<bool>;
using vvb = std::vector<vb>;
using vi = std::vector<int>;
using vvi = std::vector<vi>;
using vl = std::vector<long>;
using vll = std::vector<long long>;
using vvl = std::vector<vl>;
using vc = std::vector<char>;
using vvc = std::vector<vc>;
using vs = std::vector<string>;
using pii = std::pair<int, int>;
using pll = std::pair<long long, long long>;
using mii = std::map<int, int>;
using mll = std::map<long long, long long>;
using msi = std::map<string, int>;
using umii = std::unordered_map<int, int>;
using umll = std::unordered_map<long long, long long>;
using si = std::set<int>;
using sll = std::set<long long>;

/*--------- Loop's Shortcuts ------------*/
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define F0R(i, b) for (int i = (0); i < (b); i++)
#define REP(i, a, b) for (int i = int(a); i >= b; --i)
#define R0P(i, b) for (int i = int(b); i >= 0; --i)
#define each(i, arr) for (auto &i : x)

/*-------- In-Built Func^ Shortcuts ------*/
#define pb push_back
#define pp pop_back
#define mp make_pair
#define eb emplace_back
#define Fi first
#define Si second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sum(x) accumulate(all(x), 0LL)
#define init(arr,val) memset(arr,val,sizeof(arr))
#define deb(x) cout << #x << " = " << x << endl;
#define debp(x, y) cout << #x << " = " << x  << " , "<< #y << " = " << y << endl;
#define sz(x) ((long long)(x).size())
#define make_unique(x) sort(all(x)); auto it = unique(all(x)); x.resize(it - x.begin())
#define endl "\n"
#define lb lower_bound
#define ub upper_bound

/* -------- FAST IO operation ------ */
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

/*--------- Input Output Templets & Util's ---- */
template <typename T, typename U> std::ostream &operator<<(std::ostream &stream, const pair<T, U> &p){
    return stream << p.first << " " << p.second;}
template <typename T1, typename U> std::istream &operator>>(istream &is, pair<T1, U> &p){
    is >> p.first >> p.second;return is;}
template <typename T> std::ostream &operator<<(std::ostream &out, const vector<T> &vec){
    for (const T &x : vec) out << x << ' '; return out;}
template <typename T> std::istream &operator>>(istream &in, vector<T> &v){
    for (auto &i : v)in >> i;return in;}
template <typename T> void print(T &&t) { cout << t << '\n'; }
template <typename T, typename... Args>void print(T &&t, Args &&...args){cout << t << " ";
    print(forward<Args>(args)...);}
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int rnd(int l, int r){ return uniform_int_distribution<int>(l, r)(rng); }

/*--------  Pre-difined Constants-------*/
constexpr long long mod = 1e9 + 7 , inf = 1e18; 
constexpr int Mod_N = 10e5 + 5; constexpr ld Eps = 1e-9;
const double PI = acos((double)-1);

inline long long GCD_extended(long long a, long long b, long long &x, long long &y){
    x = 1, y = 0;long long x1 = 0, y1 = 1, a1 = a, b1 = b;
    while (b1){long long q = a1 / b1;tie(x, x1) = make_tuple(x1, x - q * x1);
        tie(y, y1) = make_tuple(y1, y - q * y1);tie(a1, b1) = make_tuple(b1, a1 - q * b1);}
    return a1;
}
inline long long LCM(long long a, long long b){
    return ((long long)a * b) / __gcd(a, b);
}
inline long long __gcd(long long a, long long b){
    while (b){ a %= b; swap(a, b);}
    return a;
}
constexpr int pct(int x) { return __builtin_popcount(x); } // # of bits set
constexpr int bits(int x){ // assert(x >= 0); 
    return x == 0 ? 0 : 31 - __builtin_clz(x);} 
long long cdiv(long long a, long long b) { return a / b + ((a ^ b) > 0 && a % b); } // divide a by b rounded up
long long fdiv(long long a, long long b) { return a / b - ((a ^ b) < 0 && a % b); } // divide a by b rounded down

const int dx[4]{1, 0, -1, 0}, dy[4]{0, 1, 0, -1}; // for every grid problem!!
const int N = 2005;

void solveTestCases(){
    static long long Tc = 1;
    cout << "Case #" << Tc << ": "; Tc++;
   
    int n;
    cin >> n;

    vi arr(n);
    cin >> arr;

    int check = 0;
    int count = 0;

    sort(all(arr));

    F0R(i,n){
        if(arr[i]>check){
            count++;
            check++;
        }
    }
    cout << count << endl;
}

int main(int argc, char const *argv[]){
    fast;

    int t = 1;
    cin >> t;

    while (t--){
        solveTestCases();
    }

    return 0;
}