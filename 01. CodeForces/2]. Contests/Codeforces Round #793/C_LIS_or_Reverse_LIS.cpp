/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
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
using vvs = std::vector<vs>;
using pii = std::pair<int, int>;
using pll = std::pair<long long, long long>;
using vpll = std::vector<pair<long long, long long>>;
using vpii = std::vector<pair<int, int>>;
using mii = std::map<int, int>;
using mll = std::map<long long, long long>;
using mci = std::map<char, int>;
using msi = std::map<string, int>;
using umii = std::unordered_map<int, int>;
using umll = std::unordered_map<long long, long long>;
using si = std::set<int>;
using sll = std::set<long long>;
using sc = std::set<char>;
using ss = std::set<string>;

/*--------- Loop's Shortcuts ------------*/
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define F0R(i, b) for (int i = (0); i < (b); i++)
#define REP(i, a, b) for (int i = int(a); i >= b; --i)
#define R0P(i, b) for (int i = int(b); i >= 0; --i)
#define each(i, arr) for (auto &i : arr)

/*-------- In-Built Func^ Shortcuts ------*/

#define pb push_back
#define ppb pop_back
#define pf  push_front
#define ppf pop_front
#define mp(p1,p2) make_pair(p1,p2);
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
#define lb lower_bound // lower bound -> Lower Bound of X = first element >= X in the DS
#define ub upper_bound // Upper bound -> Upper Bound of X = first element > X in the DS

/* -------- FAST IO operation ------ */
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);cin.exceptions(ios::badbit | ios::failbit);

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
template <class T>void print(set<T> Set){for (T i : Set){cerr << i << " ";}}
template <class T, class V>void print(map<T, V> Map){for (T i : Map){cerr << i << " ";}}
template <class T>void print(multiset<T> MutliSet){for (T i : MutliSet){cerr << i << " ";}}
#define oset tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>// find_by_order, order_of_key
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int rnd(int l, int r){ return uniform_int_distribution<int>(l, r)(rng); }

/*--------  Pre-difined Constants-------*/
constexpr long long mod = 1e9 + 7 , inf = 1e9; 
constexpr int Mod_N = 10e5 + 5; constexpr ld Eps = 1e-9;
const double PI = 3.141592653589793238462; // 2 * asin(1.0);

/*--------- Predefined Function  ---- */
long long GCD(long long a, long long b){ // to find GCD of two number
    return b ? GCD (b, a % b) : a;
}
long long LCM(long long a, long long b){ // to find LCM of two number 
    return ((long long)a * b) / GCD(a, b);
}
long long GCD_extended(long long a, long long b, long long &x, long long &y){
    x = 1, y = 0;long long x1 = 0, y1 = 1, a1 = a, b1 = b;
    while (b1){long long q = a1 / b1;tie(x, x1) = make_tuple(x1, x - q * x1);
        tie(y, y1) = make_tuple(y1, y - q * y1);tie(a1, b1) = make_tuple(b1, a1 - q * b1);}
    return a1;
}
vector<pair<long long, long long>> primeFactor(long long n){vector<pair<long long, long long>>pfact; 
  for(ll i=2; i*i<=n; i++) if(n%i==0){ll cnt=0; while(n%i==0) {cnt++; n/=i;} pfact.pb({i,cnt});}
  if(n>1) pfact.pb({n,1});  return pfact;
}
constexpr int setbit(int x) { return __builtin_popcount(x); } // # of bits set
constexpr long long setbit(long long x) { return __builtin_popcountll(x);}
constexpr int zerobits(int x){return __builtin_ctz(x);} // # zero bits occuring before first set bit
constexpr long long zerbits (long long x) { return __builtin_ctz(x);}
long long cdiv(long long a, long long b) { return a / b + ((a ^ b) > 0 && a % b); } // divide a by b rounded up
long long fdiv(long long a, long long b) { return a / b - ((a ^ b) < 0 && a % b); } // divide a by b rounded down
template <class T> bool ckmin(T &a, const T &b) { return b < a ? a = b, 1 : 0;} // TO check Min
template <class T> bool ckmax(T &a, const T &b) { return a < b ? a = b, 1 : 0;} // TO check Max
long long binpow(long long a, long long b) { a %= mod;long long res = 1;while (b > 0) {
    if (b & 1){res = res * a % mod;} a = a * a % mod;b >>= 1;}return res;}//Binary Exponentiation( calculate A ^ B ) O(log b)
// Sieve of Erastosthenes---> O(n* log(logn))
vector<long long> sieve(int n) {int *arr = new int[n + 1](); vector<long long>sieveVect; 
    for (int i = 2; i <= n; i++)if (arr[i] == 0) {sieveVect.push_back(i); 
    for (int j = 2 * i; j <= n; j += i)arr[j] = 1;} return sieveVect;}
bool isPrime(long long n){if(n==1){return false;} for(ll i=2; i*i<=n; i++){ 
    if(n%i==0) return false;} return true;} // Prime or not-----O(sqrt(n))
bool perfectsq (long long n){ if(ceil(double(sqrt(n)) == floor(double(sqrt(n)))))return true; 
    else return false;}  //Perfect square or not----->O(1)
long long factorial(ll n){if(n==0)return 0;else { //factorial of a no.----->O(n)
long long fact = 1;for(long long i=1; i<=n; i++){ fact=(fact*i)%mod; }return fact;}}
long long countPrimes(ll n) { if(n<2) return 0;
    int count=0; vector<bool> primes(n,1); primes[0] = false; primes[1] = false;
    for(ll i=2;i<n;i++){if(primes[i]){count++;for(ll j=i*i;j<n;j+=i) primes[j]=0;}}
    return count; // return the number of prime number till N
}
long long nCr(long long n, long long r){
    long long res=factorial(n)/(factorial (r)*factorial (n-r));
    return res; // find nCr combination
}
bool ispalindrome(string str){ long long start = 0, end = str.length()-1; 
    while(start <= end){ if(str[start]!=str[end]){return false;  break;}
        start++;
        end--;
    }
    return true;
}
unsigned highestPowerof2(unsigned x){ // return the nearest number that is power of Two
    x |= x >> 1;
    x |= x >> 2;
    x |= x >> 4;
    x |= x >> 8;
    x |= x >> 16;
    return x ^ (x >> 1);
}
bool checkPowerof2(long long n){ // check if the number is power of 2 or not
    if(n==0)return false;
    return (ceil(log2(n)) == floor(log2(n)));
}
auto Dcmp = [](auto a, auto b){ // Descending Lambda comparator 
    return a >= b;
};
auto Acmp = [](auto a, auto b) { // Accending Lambda Comparator 
    return a <= b;
};
/*--------  Pre Variables and DS-------*/
vector<int> dx = {1, 0, -1, 0}; // {0, 0, 1, 1, 1, -1, -1, -1}
vector<int> dy = {0, 1, 0, -1}; // {0, 0, 1, 1, 1, -1, -1, -1}  
const int N = 2005;

int lis(vector<int> const& a) {
    int n = a.size();
    vector<int> d(n+1, inf);
    d[0] = -inf;

    for (int i = 0; i < n; i++) {
        int j = upper_bound(d.begin(), d.end(), a[i]) - d.begin();
        if (d[j-1] < a[i] && a[i] < d[j])
            d[j] = a[i];
    }

    int res = 0;
    for (int i = 0; i <= n; i++) {
        if (d[i] < inf)
            res = i;
    }
    cout << endl;
    return res;
}

void solveTestCases(){
    // static long long Tc = 1;
    // cout << "Case #" << Tc << ": "; Tc++;
    int n;cin >> n;

    vi Array(n);
    map<int, int> MapA;
    F0R(i,n){
        cin >> Array[i];
        MapA[Array[i]]++;
    }
    int res = 0;
    int cnt1 = 0;

    for (auto it : MapA){
        if (it.Si > 1) res++;
        else cnt1++;
    }
    res += (cnt1 + 1) / 2;

    print(res);

}

int main(int argc, char const *argv[]){
    fast;

    int test = 1;
    cin >> test;

    while (test--){
        solveTestCases();
    }

    return 0;
}