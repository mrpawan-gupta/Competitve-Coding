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
#define loop(a, b, c) for (long long a = b; a < c; ++a)
#define loopI(a, b, c, d) for (long long a = b; a <=c; a+=d)
#define loopD(a, b, c, d) for (long long a = b; a >=c; a-=d)
#define itr(i, V) for (__typeof__((V)).begin() i = (V).begin(); i != (V).end(); i++)

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
#define deb(x) cout << #x << " = " << x << endl;
#define debp(x, y) cout << #x << " = " << x  << " , "<< #y << " = " << y << endl;
#define sb(x) __builtin_popcountll(x)
#define sz(x) ((long long)(x).size())
#define make_unique(x) sort(all(x)); auto it = unique(all(x)); x.resize(it - x.begin())
#define endl "\n"

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

/*--------  Pre-difined Constants-------*/
constexpr long long mod = 1000000007, inf = 1e18;
constexpr int mod_N = 10e5 + 5; constexpr ld Eps = 1e-9;
#define PI 3.1415926535897932384626433832795l

long long GCD_extended(long long a, long long b, long long &x, long long &y){
    x = 1, y = 0;long long x1 = 0, y1 = 1, a1 = a, b1 = b;
    while (b1){long long q = a1 / b1;tie(x, x1) = make_tuple(x1, x - q * x1);
        tie(y, y1) = make_tuple(y1, y - q * y1);tie(a1, b1) = make_tuple(b1, a1 - q * b1);
    }
    return a1;
}
long long LCM(long long a, long long b){
    return ((long long)a * b) / __gcd(a, b);
}

const int MAX = 1000005;
int T, N, M, K;

long long fact[MAX], ifact[MAX];
long long dp[1001][1001];
int last[MAX];

void process(){
    dp[0][0] = 1;
    for (int i = 0; i < 1000; i++){
        for (int j = 0; j <= i; j++){
            // cook a dish which has been cooked before.
            dp[i + 1][j] += dp[i][j] * j % mod;
            if (dp[i + 1][j] >= mod)
                dp[i + 1][j] -= mod;

            // cook a new type of dish.
            if (j < 1000)
                dp[i + 1][j + 1] += dp[i][j];
            if (dp[i + 1][j + 1] >= mod)
                dp[i + 1][j + 1] -= mod;
        }
    }
    fact[0] = 1;
    for (int i = 1; i <= 1000000; i++){
        fact[i] = (i * fact[i - 1]) % mod;
    }
    for (int i = 2; i <= 1000; i++){
        if (!last[i]){
            for (int j = i * i; j <= 1000000; j += i){
                last[j] = i;
            }
        }
    }

    for (int i = 1; i <= 1000000; i++){
        if (last[i]) {
            ifact[i] = ifact[last[i]] * ifact[i / last[i]] % mod;
            continue;
        }
        long long n = i;
        int p = mod - 2;
        long long r = 1;
        for (; p; p >>= 1){
            if (p & 1){
                r = (r * n) % mod;
            }
            n = (n * n) % mod;
        }
        ifact[i] = r;
    }

    ifact[0] = 1;
    for (int i = 1; i <= 1000000; i++)
        ifact[i] = (ifact[i - 1] * ifact[i]) % mod;
}
void solveTestCases(){
    cin >> N >> M >> K;

    long long res = 0;
    for (int j = 1; j <= K && j <= M; j++) {
        long long cur = 1;
        cur = (cur * dp[N][j]) % mod;
        cur = (cur * fact[M]) % mod;
        cur = (cur * ifact[M - j]) % mod;

        res += cur;
        if (res >= mod)
            res -= mod;
    }
    print(res);
}

int main(int argc, char const *argv[]){
    fast;

    int t = 1;
    cin >> t;

    process();

    while (t--){
        solveTestCases();
    }

    return 0;
}