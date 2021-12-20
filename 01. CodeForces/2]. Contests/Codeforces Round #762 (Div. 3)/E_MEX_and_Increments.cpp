#include <bits/stdc++.h>
using namespace std;
using ll = long long;
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
using umii = unordered_map<int, int>;
const ll mod = 1e9 + 7, inf = 1e18;
#define loop(a, b, c) for (auto a = b; a < c; a++)
#define pb push_back
#define pp pop_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solveTestcases(){
    ll n; // size of array
    cin >> n;
    
    // input array
    vll arr(n), vect;
    map<ll, ll> mp; // store the no of ocuurence
    loop(i,0,n){
        cin >> arr[i];
        mp[arr[i]]++;
    }
    sort(all(arr));

    ll count = 0; // no of occurence
    ll end = -1; // store end idx

    bool isTrue = false;

    loop(i,0,n+1){
        if (end < i - 1 || isTrue){
            isTrue = true;
            cout << -1 << " ";
        }
        else{
            cout << count + mp[i] << " ";
        }
        if (mp[i]){
            end = i;
            if (mp[i] > 1)
            {
                vect.pb(i);
                mp[i]--;
            }
        }
        else if (vect.size()){
            end = i;
            ll check = vect.back();
            count += i - check;
            mp[check]--;
            if (mp[check] == 0)
                vect.pp();
        }
    }

    cout << endl;
}
int main(){
    fast;

    /*
    hint E: for each number from 0 to n , find out how many increments are required to form that number. That can be done using priority queue. 
    Let that array be B. Store ina dictionary count of each element.
    Then for each number I, count = d(I)+B(i-1)
    */

    // no of testcases
    int t;
    cin >> t;
    while(t--){
        solveTestcases();
    }

    return 0;
}
