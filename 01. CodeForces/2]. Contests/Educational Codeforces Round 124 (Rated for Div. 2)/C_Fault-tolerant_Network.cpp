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
constexpr long long mod = 1e9 + 7, inf = 1e18;
constexpr int Mod_N = 10e5 + 5; constexpr ld Eps = 1e-9;
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


void solveTestCases(){
    lli n, i;
    lli cnt1, cnt2, cnt3, cnt4;
    cin >> n;
    vector<int> a(n), b(n);
    cin >> a;
    cin >> b;

    loop(i, 0, n){
        if (i == 0){
            cnt1 = abs(b[0] - a[i]);
            cnt2 = abs(b[n - 1] - a[i]);
        }
        else{
            if (abs(b[0] - a[i]) < cnt1)
            {
                cnt1 = abs(b[0] - a[i]);
            }
            if (abs(b[n - 1] - a[i]) < cnt2)
            {
                cnt2 = abs(b[n - 1] - a[i]);
            }
        }
    }
    loop(i, 0, n){
        if (i == 0){
            cnt3 = abs(a[0] - b[i]);
            cnt4 = abs(a[n - 1] - b[i]);
        }
        else{
            if (abs(a[0] - b[i]) < cnt3) {
                cnt3 = abs(a[0] - b[i]);
            }
            if (abs(a[n - 1] - b[i]) < cnt4)
            {
                cnt4 = abs(a[n - 1] - b[i]);
            }
        }
    }
    lli ans = abs(a[0] - b[0]) + abs(a[n - 1] - b[n - 1]);

    if (abs(a[0] - b[0]) + cnt2 + cnt4 < ans) {
        ans = abs(a[0] - b[0]) + cnt2 + cnt4;
    }

    if (abs(a[n - 1] - b[n - 1]) + cnt1 + cnt3 < ans){
        ans = abs(a[n - 1] - b[n - 1]) + cnt1 + cnt3;
    }

    if (abs(a[n - 1] - b[0]) + abs(a[0] - b[n - 1]) < ans) {
        ans = abs(a[n - 1] - b[0]) + abs(a[0] - b[n - 1]);
    }

    if (abs(a[0] - b[n - 1]) + cnt1 + cnt4 < ans) {
        ans = abs(a[0] - b[n - 1]) + cnt1 + cnt4;
    }

    if (abs(a[n - 1] - b[0]) + cnt3 + cnt2 < ans){
        ans = abs(a[n - 1] - b[0]) + cnt3 + cnt2;
    }

    ans = min(ans, cnt1 + cnt2 + cnt3 + cnt4);

    if (cnt1 + cnt2 + cnt3 + cnt4 < ans){
        ans = cnt1 + cnt2 + cnt3 + cnt4;
    }
    cout << ans << endl;
}

int main(int argc, char const *argv[]){
    fast;

    int t = 1;
    cin >> t;

    while (t--)
    {
        solveTestCases();
    }

    return 0;
}