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
const int BITS = 20;

int main(){
    fast;

    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i){
            cin >> arr[i];
        }
        vector<int> F(1 << BITS, 0);
        for (int i : arr)
            F[i]++;

        vector<vector<int>> dp(1 << BITS, vector<int>(BITS + 1));
        for (int t = 0; t < (1 << BITS); t++)
        {
            dp[t][0] = F[t];
        }

        for (int t = 0; t < (1 << BITS); t++)
        {
            for (int i = 1; i <= BITS; i++)
            {
                if (t & (1 << (i - 1)))
                {
                    dp[t][i] = dp[t][i - 1] + dp[t ^ (1 << (i - 1))][i - 1];
                }
                else
                {
                    dp[t][i] = dp[t][i - 1];
                }
            }
        }

        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            ans += (1ll * (dp[arr[i]][BITS] - 1) * (n - 2));
        }

        cout << ans << '\n';
    }

    return 0;
}
