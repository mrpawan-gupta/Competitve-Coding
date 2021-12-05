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
        int n, k, s = 0;
        cin >> n >> k;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            s += a[i];
        }
        sort(a, a + n);
        for (int i = 0; i < n; i++)
            cin >> b[i];
        sort(b, b + n);
        int i = 0, j = n - 1;
        while (k > 0 && i < n && j >= 0)
        {
            if (a[i] < b[j])
            {
                s += b[j] - a[i];
                i++;
                j--;
                k--;
            }
            else
                break;
        }
        cout << s << "\n";
    }
    
    return 0;
}
