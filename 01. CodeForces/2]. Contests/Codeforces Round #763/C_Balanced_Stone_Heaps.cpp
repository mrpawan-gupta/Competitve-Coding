/*
SOlution By :- Pawan Gupta
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
//----- const-------
const long long mod = 1e9 + 7, inf = 1e18;
const int Mod_N = 10e5 + 5;
#define PI 3.1415926535897932384626433832795l
//--------loops------------
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
//-------------- Fast IO ----------
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sum(x) accumulate(all(x), 0LL)
#define sb(x) __builtin_popcountll(x)
#define sz(x) (auto)(x).size()
#define make_unique(x) sort(all(x)); auto it = unique(all(x)); x.resize(it - x.begin())

template <typename T>istream &operator>>(istream &in, vector<T> &v){
    for (auto &i : v)in >> i;return in; }
template <typename A, typename B>istream &operator>>(istream &in, pair<A, B> &a){
    in >> a.first >> a.second;return in;}

const int N = 2e5 + 5;
int n;
int a[N];
bool minHeapCheck(int x){
    int heap[n + 2];
    memset(heap, 0, sizeof heap); // set all element to Zero

    for (int i = n - 1; i >= 2; i--){
        if (a[i] + heap[i] < x)
            return false;
        int start = 0, end = a[i], mid, ans = 0;
        while (start <= end)
        {
            mid = start + end >> 1;
            if (3 * mid <= a[i] && a[i] - (3 * mid) + heap[i] >= x)
            {
                start = mid + 1;
                ans = mid;
            }
            else
            {
                end = mid - 1;
            }
        }
        heap[i - 1] += ans;
        heap[i - 2] += (2 * ans);
    }
    if (heap[0] + a[0] >= x && heap[1] + a[1] >= x)
        return true;
    return false;
}
//----------solution---------
void solveTestCases(){
    
    // write your code

    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    int start = 1, end = 1e9, mid, ans;
    // ------ binary search -----
    while (start <= end)
    {
        mid = start + end >> 1;
        if (minHeapCheck(mid)){
            ans = mid;
            start = mid + 1;
        }
        else{
            end = mid - 1;
        }
    }
    cout << ans << endl; //min elemen
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

