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
const ll mod = 1e9 + 7, inf = 1e18;
#define pb push_back
#define pp pop_back
#define mp make_pair
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solution(){
    int n;
    cin >> n;
    vs s;
    for (int i = 0; i < (n - 2); i++){
        string x;
        cin >> x;
        s.push_back(x);
    }
    string sol = "";
    sol += s[0];
    int c = 1;
    for (int i = 1; i < n - 2; i++){
        if (sol[sol.size() - 1] != s[i][0]){
            sol += s[i];
            c = 0;
        }
        else{
            sol += s[i][1];
        }
    }
    if (sol.size() != n){
        if (sol[0] == 'a'){
            while (sol.size() < n){
                sol += "b";
            }
        }
        else{
            while (sol.size() < n){
                sol += "a";
            }
        }
    }
    cout << sol << endl;
}
int main(){
    fast;

    int t = 1;
    cin >> t;
    while(t--){
        solution();
    }

    return 0;
}
