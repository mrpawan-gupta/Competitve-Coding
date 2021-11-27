#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
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
const ll mod = 998244353, inf = 1e18;
#define pb push_back
#define pp pop_back
#define mp make_pair
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
        ll n;
        cin >> n;
        ll p = 1, q;
        if (n % 2 == 0)

            if (n % 4 == 0){

                q = 1;
                p = n / 4;
                p %= mod;

                p *= (n + 1);
                p %= mod;

                p *= (n + 1);
                p %= mod;
            }

            else
            {
                q = 2;
                p = n / 2;
                p %= mod;

                p *= (n + 1);
                p %= mod;

                p *= (n + 1);
                p %= mod;
            }
        else
        {
            q = 1;

            p *= (n + 1) / 2;
            p %= mod;

            p *= (n + 1) / 2;
            p %= mod;

            p *= n;
            p %= mod;
        }

        ll i = 0;

        if (q == 1)
        {
            i = 1;
        }
        else if (q == 2)
        {
            i = 499122177;
        }

        ll a;
        a = p * i;
        a %= mod;
        cout << a << endl;
    }
    return 0;
}
