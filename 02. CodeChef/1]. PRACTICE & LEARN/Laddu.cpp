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

    int t;
    cin >> t;

    while(t--){
        int a;
        int sum = 0;
        char s[11];
        cin >> a >> s;
        for (int i = 0; i < a; i++)
        {
            char b[16];
            cin >> b;
            if (b[8] == 'W')
            {
                int r;
                cin >> r;
                sum += 320 - (r < 20 ? r : 20);
            }
            else if (b[8] == 'R')
            {
                sum += 300;
            }
            else if (b[8] == 'H')
            {
                sum += 50;
            }
            else
            {
                int l;
                cin >> l;
                if (l >= 50 && l <= 1000)
                {
                    sum += l;
                }
            }
        }
        if (s[0] == 'I')
        {
            cout << sum / 200 << endl;
        }
        else
        {
            cout << sum / 400 << endl;
        }
    }
    return 0;
}
