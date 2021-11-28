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

    int n, x;
    cin >> n;

    int s[5] = {0};

    for (int i = 1; i <= n; i++){
        cin >> x;
        s[x]++;
    }

    int c = s[4] + s[3];

    if(s[3]<=s[1]){
        s[1] -= s[3];
    }
    else{
        s[1] = 0;
    }

    c += s[2] / 2;

    if(s[2]%2==1){
        c++;
        s[1] = max(0, s[1] - 2);
    }

    c += s[1] / 4;

    if(s[1]%4!=0){
        c++;
    }

    cout << c << '\n';

    return 0;
}
