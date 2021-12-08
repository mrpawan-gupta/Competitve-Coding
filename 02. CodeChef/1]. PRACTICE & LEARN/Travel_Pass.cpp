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

int main(){
    fast;

    int t;
    cin >> t;
    while(t--){
        int n, a, b;
        cin >> n >> a >> b;

        string s;
        cin >> s;

        int sum = 0;

        for (int i = 0; i < s.length(); i++){
            if(s[i]=='0'){
                sum += a;
            }
            else{
                sum += b;
            }
        }
        cout << sum << endl;
    }

    return 0;
}
