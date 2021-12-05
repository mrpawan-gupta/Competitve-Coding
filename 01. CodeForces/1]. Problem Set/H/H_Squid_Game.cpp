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
const ll mod = 1000000007, inf = 100000000000000100LL;
const int Max = 300010, LOG = 19;
#define pb push_back
#define pp pop_back
#define mp make_pair
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int n, m, k, u, v, x, y, t, a, b, ans;
int par[LOG][Max], h[Max], P[Max];
int stt[Max], fnt[Max], timer = 1;
int fen[Max];
vector<int> G[Max], vec[Max], out;

int GetPar(int v, int k){
    for (int i = 0; k; i++)
        if (k & (1 << i)){
            k ^= (1 << i);
            v = par[i][v];
        }
    return v;
}
inline void add(int pos, int val){
    for (; pos < Max; pos += pos & -pos)
        fen[pos] += val;
}
inline int get(int pos){
    int res = 0;
    for (; pos; pos -= pos & -pos)
        res += fen[pos];
    return res;
}
inline int get2(int v) { 
    return get(fnt[v] - 1) - get(stt[v] - 1);
}
void dfs(int node)
{
    stt[node] = timer++;
    for (int v : G[node])
        dfs(v);
    fnt[node] = timer;
}

int main(){
    fast;
    cin >> n >> m;
    for (int i = 2; i <= n; i++)
    {
        cin >> par[0][i];
        G[par[0][i]].pb(i);
        h[i] = h[par[0][i]] + 1;
        for (int j = 1; j < LOG; j++)
            par[j][i] = par[j - 1][par[j - 1][i]];
    }
    dfs(1);
    while (m--)
    {
        cin >> x >> y;
        if (h[x] > h[y])
            swap(x, y);
        if (par[0][y] == x){
            cout << -1 << '\n';
            return 0;
        }
        vec[x].pb(y);
    }
    iota(P + 1, P + n + 1, 1);
    sort(P + 1, P + n + 1, [](int i, int j)
         { return h[i] > h[j]; });
    vector<pair<int, int>> crossE;
    for (int i = 1; i <= n; i++)
    {
        int x = P[i];
        for (int y : vec[x])
        {
            if (h[x] == h[y])
            {
                crossE.pb({x, y});
                continue;
            }
            int yy = GetPar(y, h[y] - h[x] - 1);
            if (par[0][yy] != x)
            {
                crossE.pb({x, y});
                continue;
            }
            if (get2(yy) - get2(y)){
                continue;
            }
            ans++;
            out.pb(yy);
            add(stt[yy], +1);
        }
    }
    for (pair<int, int> p : crossE)
    {
        int x = p.first, y = p.second;
        if (get2(x) + get2(y) < ans){
            continue;
        }
        out.pb(1);
        ans++;
        break;
    }
    cout << ans << "\n";

    return 0;
}