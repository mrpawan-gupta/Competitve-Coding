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

ll find_smallest_div(ll n)
{
    if (n % 4 == 0)
    {
        return 4;
    }

    if (n % 3 == 0)
    {
        return 3;
    }

    set<ll> st;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            if (i != 2 && i != 3 && i != 4)
            {
                st.insert(i);
            }
            st.insert(n / i);
        }
    }

    if (st.size() > 0)
        return *st.begin();

    return -1;
}

int main(){
    fast;

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        if (n == 2)
        {
            cout << "ab" << endl;
            continue;
        }
        int c = find_smallest_div(n);
        if (c == -1)
        {
            ll temp = n - 1;
            string s = "";
            for (int i = 0; i < temp / 2; i++)
            {
                s += 'a';
            }

            cout << s << "b" << s << "\n";
            continue;
        }

        if (c % 2 == 0)
        {
            ll temp = c - 2;
            string res = "";
            for(int i = 0; i < temp / 2; i++)
            {
                res += 'a';
            }
            res = res + "bb" + res;

            for (int i = 0; i < n / c; i++)
            {
                cout << res;
            }
            cout << "\n";
        }
        else
        {
            ll temp = c - 1;
            string res = "";
            for (int i = 0; i < temp / 2; i++)
            {
                res += 'a';
            }
            res = res + 'b' + res;

            for (int i = 0; i < n / c; i++)
            {
                cout << res;
            }
            cout << "\n";
        }
    }

    return 0;
}

// bbbaba
//