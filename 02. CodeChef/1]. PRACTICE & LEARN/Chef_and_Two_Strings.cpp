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
        string s1, s2;
        cin >> s1 >> s2;
        int max = 0, min = 0;
        for (int i = 0; i < s1.size(); i++){
            if (s1[i] == '?' or s2[i] == '?'){
                max++;
            }
            else if (s1[i] != s2[i]){
                max++;
                min++;
            }
        }

        cout << min << " " << max << endl;
    }

    return 0;
}
