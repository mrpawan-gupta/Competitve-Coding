/*
Solution By : Pawan Gupta
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
#define arr array
#define loop(a, b, c) for (auto a = b; a < c; a++)
#define loopI(a, b, c, D) for (auto a = b; a >=c; a+=d)
#define pb push_back
#define pp pop_back
#define mp make_pair
#define F first
#define endl "\n"
#define S second
#define all(x) x.begin(), x.end()
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solveTestCases(){
    ll n, k; // input 
    cin >> n >> k;

    vll arr(n); // given array
    ll arrSum = 0; // sum of elements
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        arrSum += arr[i];
    }
    sort(all(arr));
    stack<ll> x;
    loop(i,1,n){
        x.push(arr[i] - arr[0]);
    }
    ll count = 0; // no of operations

    ll Min = INT_MAX; // check min of element

    while(!x.empty() && arrSum > k){
        Min = min(Min, count + (arrSum - k + count) / ( count + 1) );
        arrSum -= x.top();
        x.pop();
        count++;
     }

    if (arrSum > k){
        count += ( arrSum - k + count) / ( count + 1) ;
    }

    cout << min(Min, count) <<  endl;
    // solution
}
int main(){

    ll t = 1;
    cin >> t;

    while (t--){
        solveTestCases();
    }
}