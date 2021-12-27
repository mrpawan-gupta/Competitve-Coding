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
/*
solutuion By:-  Pawan Gupta
*/
void solveTestCases(){
    int n; // size
    cin >> n;

    vector<pii> arr(n); // input

    loop(i,0,n){
        cin >> arr[i].first;
        arr[i].second = i;
    }
    sort(all(arr));
    string s1;
    cin >> s1;

    int check = n; // check cnt
    for (auto i = n - 1; i >= 0; i--){
        if (s1[arr[i].second] == '1'){
            arr[i].first = check;
            check--;
        }
    }
    for (auto i = n - 1; i >= 0; i--){
        if (s1[arr[i].second] == '0'){
            arr[i].first = check;
            check--;
        }
    }
    // swap to get Haskey
    for (auto i = n - 1; i >= 0; i--){
        swap(arr[i].first, arr[i].second);
    }
    sort(all(arr));
    for (auto i = 0; i < n; i++){
        cout << arr[i].second << " ";
    }
    cout << endl;
}
int main(){
    fast;

    int t = 1;
    cin >> t;

    while(t--){
        solveTestCases();
    }

    return 0;
}
