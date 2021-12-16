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
const ll mod = 1e9 + 7, inf = 1e18;
#define pb push_back
#define pp pop_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;

    int t;
    cin >> t;

    while(t--){

        string a, b;
        cin >> a >> b;
        sort(all(a));
        if (b == "abc"){
            if (a[0] != 'a'){
                cout << a << "\n";
                continue;
            }
            int c1 = 0, c2 = 0;
            for (; c1 < a.size() - 1; c1++){
                if (a[c1] == 'b'){
                    break;
                }
            }
            for (c2 = c1; c2 < a.size() - 1; c2++){
                if (a[c2] == 'c'){
                    break;
                }
            }
            while (c2 < a.size() && a[c2] == 'c'){
                swap(a[c1], a[c2]);
                c1++;
                c2++;
            }
        }
        cout << a << "\n";
    }
    return 0;
}
