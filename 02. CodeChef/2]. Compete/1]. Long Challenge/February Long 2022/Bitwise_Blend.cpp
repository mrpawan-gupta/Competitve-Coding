/*
    solution By :- Pawan Gupta [ CF - Mr.pawan_gupta, CC - mrpavan_gupta]
*/
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
using namespace __gnu_cxx;

/*------ TypeDef Micro's -------*/
using ll = long long;
using ld = long double;
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
#define loop(a, b, c) for (auto a = b; a < c; ++a)
#define loopI(a, b, c, d) for (auto a = b; a <=c; a+=d)
#define loopD(a, b, c, d) for (auto a = b; a >=c; a-=d)

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
#define sz(x) (long long)(x).size()
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

/*--------  Pre-difined Constants-------*/
const long long mod = 1e9 + 7, inf = 1e18;
const int Mod_N = 10e5 + 5; const ld Eps = 1e-9;
#define PI 3.1415926535897932384626433832795l

long long b1[200002];
long long b2[200002];
long long B1 = 0;
long long B2 = 0;

void check(long long x, long long y){
    b1[B1] = x;
    B1++;
    b1[B1] = y;
    B1++;
}

void checkP(long long x, long long y){
    b2[B2] = x;
    B2++;
    b2[B2] = y;
    B2++;
}
void solveTestCases(){
    B1 = 0;
    B2 = 0;

    long long cnt1 = 0;
    long long cnt2 = 0;

    long long n;
    cin >> n;
    long long a[n];
    long long A[n];

    long long Y1 = 0, Y = 2;
    long long y1 = 0, y = 0;

    long long checkOdd = 0;
    loop(i,0,n){
        cin >> a[i];
        A[i] = a[i];
    }

    if (a[0] % 2 == 0){
        if (a[1] % 2 == 0){
            loop(i,2,n){
                if (a[i] % 2 == 1){
                    Y1 = a[i];
                    y1 = i;
                    checkOdd = 1;

                    a[1] = a[1] ^ Y1;
                    cnt1++;
                    check(1, y1);
                    break;
                }
            }
        }
        else {
            Y1 = a[1];
            y1 = 1;
            checkOdd = 1;
        }
        Y = a[1];
        y = 1;
        loop(i,2,n){
            if (a[i] % 2 == 1){
                a[i] = a[i] ^ Y;
                cnt1++;
                check(i, y);
            }
            i++;
            if (i < n){
                if (a[i] % 2 == 0){
                    a[i] = a[i] ^ Y;
                    cnt1++;
                    check(i, y);
                }
            }
        }
        A[0] = A[0] ^ Y1;
        cnt2++;
        checkP(0, y1);

        Y = A[0];
        y = 0;

        loop(i,1,n){
            if (A[i] % 2 == 1){
                A[i] = A[i] ^ Y;
                cnt2++;
                checkP(i, y);
            }
            i++;
            if (i < n){
                if (A[i] % 2 == 0)
                {
                    A[i] = A[i] ^ Y;
                    cnt2++;
                    checkP(i, y);
                }
            }
        }
    }
    else{
        checkOdd = 1;
        Y = A[0];
        y = 0;
        loop(i,1,n){
            if (a[i] % 2 == 1) {
                a[i] = a[i] ^ Y;
                cnt1++;
                check(i, y);
            }
            i++;
            if (a[i] % 2 == 0 && i < n){
                a[i] = a[i] ^ Y;
                cnt1++;
                check(i, y);
            }
        }

        Y = A[0];
        y = 0;

        loop(i,1,n){
            if (A[i] % 2 == 0){
                A[i] = A[i] ^ Y;
                cnt2++;
                checkP(i, y);
            }
            i++;
            if (A[i] % 2 == 1 && i < n) {
                A[i] = A[i] ^ Y;
                cnt2++;
                checkP(i, y);
            }
        }

        A[0] = A[0] ^ A[1];
        cnt2++;
        checkP(0, 1);
    }
    if (checkOdd == 0){
        cout << "-1\n";
    }
    else if (cnt1 > cnt2) {
        long long j;
        cout << cnt2 << "\n";
        loop(i,0,cnt2) {
            j = i * 2;
            cout << b2[j] + 1 << " " << b2[j + 1] + 1 << "\n";
        }
    }
    else {
        int j;
        cout << cnt1 << "\n";
        loop(i,0,cnt1){
            j = i * 2;
            cout << b1[j] + 1 << " " << b1[j + 1] + 1 << "\n";
        }
    }
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

