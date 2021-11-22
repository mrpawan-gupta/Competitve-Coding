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

int findMSB(int n)
{
    n = n | n >> 1;
    n = n | n >> 2;
    n = n | n >> 4;
    n = n | n >> 8;
    n = n | n >> 16;
    n = n + 1;
    return (n >> 1);
}
int main(){
    fast;

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        vi v;
        while (n > 0)
        {
            if (n == 1)
            {
                v.pb(1);
                break;
            }
            else
            {
                int x = findMSB(n);
                if (x >= n)
                {
                    v.pb(x - 1);
                    n -= (x - 1);
                }
                else
                {
                    v.pb(x + 1);
                    n -= (x + 1);
                }
            }
        }
        cout << v.size() << endl;
        for (auto i : v)
        {
            cout << i << " ";
        }
        cout << '\n';
    }
    return 0;
}
