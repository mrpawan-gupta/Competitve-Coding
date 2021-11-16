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

    int s;
    cin >> s;
    while (s--)
    {
        int n;
        cin >> n;
        int a[n], c = 1;
        string s[] = {"no", "yes"};
        for (int i = 0; i < n; ++i){
            cin >> a[i];
        }
        if ((n & 1) == 0){
            c = 0;
        }
        else{
            for (int i = 1; i <= n; ++i)
                if (i <= n / 2)
                {
                    if (i != a[i - 1])
                    {
                        c = 0;
                        break;
                    }
                }
                else
                {
                    if ((n - i + 1) != a[i - 1])
                    {
                        c = 0;
                        break;
                    }
                }
        }
        cout << s[c] << '\n';
    }
    return 0;
}
