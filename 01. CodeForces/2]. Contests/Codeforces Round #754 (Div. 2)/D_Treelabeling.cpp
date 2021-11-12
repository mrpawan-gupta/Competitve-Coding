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

    cout << fixed << setprecision(20);

    while(t--){
        int n;
        cin >> n;
        vector<vector<int>> e(n + 1);
        for (int i = 1; i < n; i++)
        {
            int u, v;
            cin >> u >> v;
            e[u].push_back(v);
            e[v].push_back(u);
        }
        vector<vector<int>> g;
        for (int i = 1; i <= n; i *= 2)
        {
            vector<int> A;
            for (int j = i; j <= min(2 * i - 1, n); j++)
            {
                A.push_back(j);
            }
            g.push_back(A);
        }
        vector<int> col(n + 1);
        vector<vector<int>> q(2);
        function<void(int, int)> dfs = [&](int u, int p)
        {
            col[u] = col[p] ^ 1;
            q[col[u]].push_back(u);
            for (auto v : e[u])
            {
                if (v == p)
                    continue;
                dfs(v, u);
            }
        };
        dfs(1, 0);
        vector<int> ans(n + 1);
        reverse(g.begin(), g.end());
        for (auto &V : g)
        {
            int id = q[0].size() < q[1].size();
            for (auto i : V)
            {
                ans[q[id].back()] = i;
                q[id].pop_back();
            }
        }
        for (int i = 1; i <= n; i++)
        {
            cout << ans[i] << " \n"[i == n];
        }
    }

    return 0;
}
