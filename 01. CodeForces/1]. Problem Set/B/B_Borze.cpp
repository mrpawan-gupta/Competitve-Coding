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

    string s, s2;
    cin >> s;
    int len = s.length();
    for (int i = 0; i < len; i++){
        if (s[i] == '.'){
            s2 += '0';
        }
        if (s[i] == '-' && s[i + 1] == '.'){
            s2 += '1';
            ++i;
        }
        if (s[i] == '-' && s[i + 1] == '-'){
            s2 += '2';
            ++i;
        }
    }
    cout << s2 << '\n';

    return 0;
}
