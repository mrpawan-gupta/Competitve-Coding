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
#define fast ios::sync_with_stdio(0); cin.tie(0);cout.tie(0);

int main()
{
    fast;

    int t;
    cin >> t;

    while (t--){
        int n, k;
        cin >> n >> k;

        vector<int> a(n);

        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a.begin(), a.end());

        long s = 0;
        int j = (n - k) - 1, i = n - 1;
        while (k--){
            if (a[j] == a[i]){
                s++;
            }
            a[j] = -1;
            a[i] = -1;
            j--;
            i--;
        }
        for (int i = 0; i < n; i++){
            if (a[i] != -1){
                s += a[i];
            }
        }
        cout << s << endl;
    }
    return 0;
}
