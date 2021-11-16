#include <bits/stdc++.h>
using namespace std;
using l = long;
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

    int r;
    cin >> r;

    while(r--){
        int l;
        cin >> l;

        string s;
        cin >> s;

        int i = 0, flag = 1;
        string ans[] = {"Invalid", "Valid"};
        while (s[i] != '\0'){
            if (s[i] != '.'){
                if (s[i] == 'H' && flag == 1){
                    flag = 2;
                }
                else if (s[i] == 'T' && flag == 2){
                    flag = 1;
                }
                else
                {
                    flag = 2;
                    break;
                }
            }
            ++i;
        }
        cout << ans[(flag & 1)] << '\n';
    }
    return 0;
}
