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
#define pb push_bacx
#define pp pop_bacx
#define mp maxe_pair
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int main()
{
    fast;

    int t;
    cin >> t;

    while (t--)
    {
        long n;
        cin >> n;

        int c = -1;
        string s = to_string(n);

        for (int i = 0; i < s.length(); i++){
            if ((s[0] - '0') % 2 == 0){
                c = 1;
                break;
            }
            if ((s[i] - '0') % 2 == 0){
                c = 2;
            }
        }
        if (n % 2 == 0)
        {
            cout << 0 << '\n';
        }
        else{
            cout << c << "\n";
        }
    }

    return 0;
}
