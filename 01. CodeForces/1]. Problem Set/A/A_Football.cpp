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

    string s;
    cin >> s;

    int c = 1;
    
    for (int i = 1; i < s.length(); i++){
        if(s[i]==s[i-1]){
            c += 1;
            if (c == 7)
            {
                cout << "YES";
                return 0;
            }
        }
        else{
            c = 1;
        }
    }
    cout << "NO";

    return 0;
}
