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
#define sz(x) ((int)(x).size())
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
    return (a * b) / __gcd(a, b);
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
    // static long long Tc = 1;
    // cout << "Case #" << Tc << ": "; Tc++;
    long long arr[4];

    F0R(i,4){
        cin >> arr[i];
    }
    sort(arr, arr + 4);

    long long arr1 = (arr[2] + arr[0]) / 2;
    long long b1 = arr[2] - arr1;
    long long arr2 = (arr[2] + arr[1]) / 2;
    long long b2 = arr[2] - arr2;
    long long arr3 = (arr[3] + arr[0]) / 2;
    long long b3 = arr[3] - arr3;
    long long arr4 = (arr[3] + arr[1]) / 2;
    long long b4 = arr[3] - arr4;

    if ((arr1 % 1 == 0) && (arr1 != 0) && (b1 % 1 == 0) && (b1 != 0)){
        if (((arr1 / b1) == arr[1]) && (arr1 * b1 == arr[3]) && (arr1 >= 1) && (b1 >= 1) && (arr1 <= 10000) && (b1 <= 10000)){
            cout << arr1 << " " << b1 << endl;
            return;
        }
    }
    if ((arr2 % 1 == 0) && (arr2 != 0) && (b2 % 1 == 0) && (b2 != 0)){
        if (((arr2 / b2) == arr[0]) && (arr2 * b2 == arr[3]) && (arr2 >= 1) && (b2 >= 1) && (arr2 <= 10000) && (b2 <= 10000)){
            cout << arr2 << " " << b2 << endl;

            return;
        }
    }
    if ((arr3 % 1 == 0) && (arr3 != 0) && (b3 % 1 == 0) && (b3 != 0)){
        if (((arr3 / b3) == arr[1]) && (arr3 * b3 == arr[2]) && (arr3 >= 1) && (b3 >= 1) && (arr3 <= 10000) && (b3 <= 10000)){
            cout << arr3 << " " << b3 << endl;
            return;
        }
    }
    if ((arr4 % 1 == 0) && (arr4 != 0) && (b4 % 1 == 0) && (b4 != 0)){
        if (((arr4 / b4) == arr[0]) && (arr4 * b4 == arr[2]) && (arr4 >= 1) && (b4 >= 1) && (arr4 <= 10000) && (b4 <= 10000)){
            cout << arr4 << " " << b4 << endl;
    
            return;
        }
    }
    cout << "-1 -1" << endl;
}

int main(int argc, char const *argv[]){
    fast;

    long long t = 1;
    cin >> t;

    while (t--){
        solveTestCases();
    }

    return 0;
}