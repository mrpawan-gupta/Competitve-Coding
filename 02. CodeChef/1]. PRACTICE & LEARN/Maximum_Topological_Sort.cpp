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

const int M = (1 << 20) + 5;

int sz[M], dp[M], fact[M], inv_fact[M], parent[M];
vector<int> adj[M];
int n;

int pwr(int a, int n, int m){
    int p = 1;
    while (n)
    {
        if (n & 1)
            p = 1ll * p * a % m;
        a = 1ll * a * a % m;
        n >>= 1;
    }
    return p;
}

void gather_sizes(int u, int par){
    sz[u] = 1;
    parent[u] = par;
    for (auto v : adj[u])
    {
        if (v == par)
            continue;
        gather_sizes(v, u);
        sz[u] += sz[v];
    }
}

int get_max(int u){
    int cur_root = u;
    bool flag = true;
    while (flag)
    {
        flag = false;
        for (auto v : adj[cur_root])
        {
            if (v == parent[cur_root])
                continue;
            if (2 * sz[v] > n)
            {
                cur_root = v;
                flag = true;
                break;
            }
        }
    }
    for (auto v : adj[cur_root])
    {
        if (v == parent[cur_root])
            continue;
        if (2 * sz[v] == n && v > cur_root)
            return v;
    }
    return cur_root;
}

int get_second_max(int u){
    int mx = 0;
    for (auto v : adj[u])
        mx = max(mx, sz[v]);
    int node = 0;
    for (auto v : adj[u])
    {
        if (sz[v] == mx)
            node = max(node, v);
    }
    return node;
}

int get_topo_count(int u, int par){
    dp[u] = 1;
    sz[u] = 1;
    for (auto v : adj[u])
    {
        if (v == par)
            continue;
        get_topo_count(v, u);
        dp[u] = 1ll * dp[u] * dp[v] % mod;
        dp[u] = 1ll * dp[u] * inv_fact[sz[v]] % mod;
        sz[u] += sz[v];
    }
    dp[u] = 1ll * dp[u] * fact[sz[u] - 1] % mod;
    return dp[u];
}


int main(){
    fast;

    int L = 500000;
    fact[0] = 1;
    inv_fact[0] = 1;
    for (int i = 1; i <= L; ++i){
        fact[i] = 1ll * fact[i - 1] * i % mod;
        inv_fact[i] = pwr(fact[i], mod - 2, mod);
    }

    int t;
    cin >> t;
    while (t--){
        int k;
        cin >> n >> k;
        for (int i = 1; i < n; ++i){
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }

        gather_sizes(1, 0);
        int max_node = get_max(1);
        int max_count = get_topo_count(max_node, 0);
        int second_max_node = get_second_max(max_node);
        int second_max_count = get_topo_count(second_max_node, 0);

        if (k == 1)
            cout << max_node << " " << max_count << "\n";
        else
            cout << second_max_node << " " << second_max_count << "\n";

        for (int i = 1; i <= n; ++i)
            adj[i].clear();
    }

    return 0;
}
