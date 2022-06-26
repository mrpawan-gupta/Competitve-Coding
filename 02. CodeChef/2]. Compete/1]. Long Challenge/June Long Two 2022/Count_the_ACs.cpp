/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;

/*------ TypeDef Micro's -------*/
using ll = long long;
using li = long int;
using ld = long double;
using lli = long long int;
using vb = std::vector<bool>;
using vvb = std::vector<vb>;
using vi = std::vector<int>;
using vvi = std::vector<vi>;
using vll = std::vector<long long>;
using vvl = std::vector<vll>;
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
template<class T> using pq = std::priority_queue<T>;
template<class T> using pqg = std::priority_queue<T, vector<T>, greater<T>>;
template <typename K, typename V, typename oComp = std::less<K>>//find_by_order, order_of_key
using omap = __gnu_pbds::tree<K, V, oComp,	__gnu_pbds::rb_tree_tag,__gnu_pbds::tree_order_statistics_node_update>; 
template <typename K, typename oComp = std::less<K>> using oset = omap<K, __gnu_pbds::null_type, oComp>;


/*--------- Loop's Shortcuts ------------*/
#define FOR(idx, begin, end) for (__typeof(end) idx = (begin); idx < (end); ++idx)
#define F0R(idx, end) for (__typeof(end) idx = (0); idx < (end); ++idx)
#define REP(idx, begin, end) for (__typeof(begin) idx = begin; i >= end; --idx)
#define R0P(idx, begin) for (__typeof(begin) idx = begin; idx >= 0; --idx)
#define each(it, nums) for (auto it : nums)


/*-------- In-Built Func^ Shortcuts ------*/

#define pub push_back
#define pob pop_back
#define puf  push_front
#define pof pop_front
#define mp make_pair
#define eb emplace_back
#define Fi first
#define Si second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sum(x) accumulate(all(x), 0LL)
#define init(nums,val) memset(nums,val,sizeof(nums))
#ifndef ONLINE_JUDGE
#define deb(...) cout << "[" << #__VA_ARGS__ << "] = ", print(__VA_ARGS__), cout << endl;
#else
#define deb(...)
#endif
#define sz(x) ((long long)(x).size())
#define make_unique(x) sort(all(x)); auto it = unique(all(x)); x.resize(it - x.begin())
#define endl '\n'
#define lb lower_bound // lower bound -> Lower Bound of X = first element >= X in the DS
#define ub upper_bound // Upper bound -> Upper Bound of X = first element > X in the DS
#define mod 1000000007

/* -------- FAST IO operation ------ */
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);cin.failbit; cin.badbit

/*--------- Input Output Templets & Util's ---- */
template <typename T, typename U> std::ostream &operator<<(std::ostream &stream, const pair<T, U> &p){
    return stream << p.first << " " << p.second;}
template <typename T1, typename U> std::istream &operator>>(istream &is, pair<T1, U> &p){
    is >> p.first >> p.second;return is;}
template <typename T> std::ostream &operator<<(std::ostream &out, const vector<T> &vec){
    for (const T &x : vec) out << x << ' '; return out;}
template <typename T> std::istream &operator>>(istream &in, vector<T> &v){
    for (auto &i : v)in >> i;return in;}
template <typename T> void print(T &&t) { cout << t << "\n"; }
template <typename T, typename... Args>void print(T &&t, Args &&...args){cout << t << " ";
    print(forward<Args>(args)...);}
template <class T>void print(set<T> Set){for (T i : Set){cout << i << " ";}}
template <class T, class V>void print(map<T, V> Map){for (T i : Map){cout << i << " ";}}
template <class T>void print(multiset<T> MutliSet){for (T i : MutliSet){cout << i << " ";}}
template <class T>void print(vector<T> Vector){for (T i : Vector){cout << i << " ";}}
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());
int rnd(int l, int r){ return uniform_int_distribution<int>(l, r)(rng); }

/*--------- Predefined Function  ---- */
template <typename T>T GCD(T a, T b){ // To Find GCD Of Two Number
    return b ? GCD (b, a % b) : a;
}
template <typename T>T LCM(T a, T b){ // to find LCM of two number 
    return ((T)a * b) / GCD(a, b);
}
template <typename T>T GCD_extended(T a, T b, T &x, T &y){
    x = 1, y = 0;T x1 = 0, y1 = 1, a1 = a, b1 = b;
    while (b1){T q = a1 / b1;tie(x, x1) = make_tuple(x1, x - q * x1);
        tie(y, y1) = make_tuple(y1, y - q * y1);tie(a1, b1) = make_tuple(b1, a1 - q * b1);}
    return a1;
}
vector<pair<long long, long long>> primeFactor(long long n){vector<pair<long long, long long>>pufact; 
  for(ll i=2; i*i<=n; ++i) if(n%i==0){ll cnt=0; while(n%i==0) {++cnt; n/=i;} pufact.pub({i,cnt});}
  if(n>1) pufact.pub({n,1});  return pufact;
}
constexpr int setbit(int x) { return __builtin_popcount(x); } // # no of set bits
constexpr long long setbit(long long x) { return __builtin_popcountll(x);}
constexpr int zerobits(int x){return __builtin_ctz(x);} // # zero bits occuring before first set bit
constexpr long long zerbits (long long x) { return __builtin_ctz(x);}
template <typename T>T roundUp(T a, T b) { return a / b + ((a ^ b) > 0 && a % b); } // divide a by b rounded up
template <typename T>T roundDown(T a, T b) { return a / b - ((a ^ b) < 0 && a % b); } // divide a by b rounded down
template <class T> bool ckmin(T &a, const T &b) { return b < a ? a = b, 1 : 0;} // TO check Min
template <class T> bool ckmax(T &a, const T &b) { return a < b ? a = b, 1 : 0;} // TO check Max
template <typename T>T binpow(T a, T b) { a %= mod;T res = 1;while (b > 0) { // Binary Exponentiation
    if (b & 1){res = res * a % mod;} a = a * a % mod;b >>= 1;}return res;}// (calculate A^B)
// Sieve of Erastosthenes---> O(n* log(logn))
vector<long long> sieve(int n) {int *nums = new int[n + 1](); vector<long long>sieveVect; 
    for (int i = 2; i <= n; ++i)if (nums[i] == 0) {sieveVect.push_back(i); 
    for (int j = 2 * i; j <= n; j += i)nums[j] = 1;} return sieveVect;}
template <class T>bool isPrime(const T &n){if(n==1){return false;} for(T i=2; i*i<=n; ++i){ 
    if(n%i==0) return false;} return true;} // Prime or not----> O(sqrt(n))
template <class T> bool perfectsq (const T &n){ if(ceil(double(sqrt(n)) == floor(double(sqrt(n)))))return true; 
    else return false;}  //Perfect square or not----->O(1)
template <typename T>T factorial(T n){if(n==0)return 0;else { //Factorial of a number -----> O(n)
T fact = 1;for(T i=1; i<=n; ++i){ fact=(fact*i)%mod; }return fact;}}
template <typename T>T countPrimes(T n) { if(n<2) return 0;
    int count=0; vector<bool> primes(n,1); primes[0] = false; primes[1] = false;
    for(T i=2;i<n;++i){if(primes[i]){count++;for(T j=i*i;j<n;j+=i) primes[j]=0;}}
    return count; // return the number of prime number till N
}
template <typename T>T nCr(T n, T r){
    T ans=factorial(n)/(factorial (r)*factorial (n-r));
    return ans; // find nCr combination
}
bool ispalindrome(string str){ long long start = 0, end = str.length()-1; 
    while(start <= end){ if(str[start]!=str[end]){return false;  break;}
        start++;
        end--;
    }
    return true;
}
unsigned highestPowerof2(unsigned num){ // return the nearest number that is power of Two
    num |= num >> 1;
    num |= num >> 2;
    num |= num >> 4;
    num |= num >> 8;
    num |= num >> 16;
    return num ^ (num >> 1);
}
template <class T> bool checkPowerof2(T &n){ // check if the number is power of 2 or not
    if(n==0)return false;
    return (ceil(log2(n)) == floor(log2(n)));
}
auto Dcmp = [](auto a, auto b){ // Descending Lambda comparator 
    return a >= b;
};
auto Acmp = [](auto a, auto b) { // Accending Lambda Comparator 
    return a <= b;
};
struct Hash {  // http://xorshift.di.unimi.it/splitmix64.c
    const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
    static uint64_t splitmix64(uint64_t bit) {
        bit += 0x9e3779b97f4a7c15;
        bit = (bit ^ (bit >> 30)) * 0xbf58476d1ce4e5b9;
        bit = (bit ^ (bit >> 27)) * 0x94d049bb133111eb;
        return bit ^ (bit >> 31);
    }
    size_t operator()(uint64_t x) const {
        return splitmix64(x + FIXED_RANDOM);
    }
};

/*-------- Variables and Structures-------*/
constexpr long long MOD = 1e9 + 7 , inf = 1e18; 
constexpr int Mod_N = 10e5 + 5; constexpr ld Eps = 1e-9;
const double PI = 3.141592653589793238462; // 2 * asin(1.0);
vector<int> dx = {1, 0, -1, 0}; // {0, 0, 1, 1, 1, -1, -1, -1};
vector<int> dy = {0, 1, 0, -1}; // {0, 0, 1, 1, 1, -1, -1, -1}; 
const int N = 2005;
const int maxN = 2e5 + 5;

void solveTestCases(){
    // static long long Tc = 1;
    // cout << "Case #" << Tc << ": "; Tc++;
    int num; cin >> num;
     int numDiv= num/100;
    
     if(numDiv== 0){
         numDiv= num%100;
         if(numDiv> 10){
             cout << -1 << endl;
             return;
         }else{
             cout << numDiv<< endl;
             return;
         }
     }else{
         numDiv+= num%100;
         if(numDiv> 10){
             cout << -1 << endl;
             return;
         }else{
             cout << numDiv<< endl;
             return;
         }
     }
}

int main(int argc, char const *argv[]){
    fast;
    #ifndef ONLINE_JUDGE
      freopen("input.txt","r", stdin);
      freopen("output.txt","w", stdout);
    #endif

    int __testCases = 1;
    cin >> __testCases;

    while (__testCases--){
        solveTestCases();
    }

    return 0;
}