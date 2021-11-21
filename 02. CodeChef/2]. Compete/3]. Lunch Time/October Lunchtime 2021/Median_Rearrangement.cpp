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

    while(t--){
        int n;
        long long k;
        cin >> n >> k;
        vector<int> a;
        a.push_back(0);
        for (int _ = 1; _ <= n * n; _++)
        {
            int x;
            cin >> x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());

        long long min = 0;
        for (int i = (n / 2) + 1, j = 1; j <= n; i += n / 2 + 1, j++)
            min += a[i];
        if (min > k)
        {
            cout << -1 << endl;
            continue;
        }
        int l = (n / 2) + 1;
        int r = (n * n) / 2 + 1;
        int ans = -1;
        while (r >= l)
        {
            int mid = (l + r) / 2;
            long long cost = 0;
            int lim = mid - 1;
            int x = mid;
            for (int i = 1; i <= n; i++)
            {
                if (lim >= n / 2)
                {
                    cost += a[x];
                    x++;
                    lim -= n / 2;
                }
                else
                {
                    x += n / 2 - lim;
                    cost += a[x];
                    x++;
                    lim = 0;
                }
            }
            if (cost > k)
                r = mid - 1;
            else
            {
                l = mid + 1;
                ans = mid;
            }
        }
        cout << a[ans] << endl;
    }

    return 0;
}
