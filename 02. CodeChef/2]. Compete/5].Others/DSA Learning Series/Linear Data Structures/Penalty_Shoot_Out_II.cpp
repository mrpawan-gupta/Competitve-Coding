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
    while (t--)
    {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int c1 = 0, c2 = 0, flag = 2 * n, r1 = n, r2 = n;
        for (int i = 0; i < 2 * n; i++)
        {
            if (i % 2 == 0){
                if (s[i] == '1'){
                    c1++;
                }
                r1--;
            }
            else{
                if (s[i] == '1'){
                    c2++;
                }
                r2--;
            }
            if ((c1 - c2) > r2){
                flag = i + 1;
                break;
            }
            if ((c2 - c1) > r1){
                flag = i + 1;
                break;
            }
        }
        cout << flag << endl;
    }

    return 0;
}

