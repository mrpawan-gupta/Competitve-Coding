/*
    solution By :- Pawan Gupta [ CF - Mr.pawan_gupta, CC - mrpavan_gupta]
*/
#pragma GCC optimize("Ofast,unroll-loops")
#pragma GCC target("avx,avx2,fma,sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
using namespace __gnu_cxx;

// ------ TypeDef Micro's -------
using ll = long long;
using ld = long double;
using vb = std::vector<bool>;
using vvb = std::vector<vb>;
using vi = std::vector<int>;
using vvi = std::vector<vi>;
using vl = std::vector<long>;
using vll = std::vector<long long>;
using vvl = std::vector<vl>;
using vc = std::vector<char>;
using vvc = std::vector<vc>;
using vs = std::vector<string>;
using pii = std::pair<int, int>;
using pll = std::pair<long long, long long>;
using mii = std::map<int, int>;
using mll = std::map<long long, long long>;
using msi = std::map<string, int>;
using umii = std::unordered_map<int, int>;
using umll = std::unordered_map<long long, long long>;
using si = std::set<int>;
using sll = std::set<long long>;
/* --------  Pre-difined Constants------- */
const long long mod = 1e9 + 7, inf = 1e18;
const int Mod_N = 10e5 + 5;
#define PI 3.1415926535897932384626433832795l

/*--------- Loop's Shortcuts ------------*/
#define loop(a, b, c) for (auto a = b; a < c; ++a)
#define loopI(a, b, c, d) for (auto a = b; a <=c; a+=d)
#define loopD(a, b, c, d) for (auto a = b; a >=c; a-=d)

/*-------- In-Built Func^ Shortcuts ------*/
#define pb push_back
#define pp pop_back
#define mp make_pair
#define eb emplace_back
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define sum(x) accumulate(all(x), 0LL)
#define sb(x) __builtin_popcountll(x)
#define sz(x) (auto)(x).size()
#define make_unique(x) sort(all(x)); auto it = unique(all(x)); x.resize(it - x.begin())
#define endl "\n"
/* -------- FAST IO operation ------ */
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

/*--------- Input Output Templets & Util's ---- */
template <typename T, typename U> std::ostream &operator<<(std::ostream &stream, const pair<T, U> &p){
    return stream << p.first << " " << p.second;}
template <typename T1, typename U> std::istream &operator>>(istream &is, pair<T1, U> &p){
    is >> p.first >> p.second;return is;}
template <typename T> std::ostream &operator<<(std::ostream &out, const vector<T> &vec){
    for (const T &x : vec) out << x << ' '; return out;}
template <typename T> std::istream &operator>>(istream &in, vector<T> &v){
    for (auto &i : v)in >> i;return in;}

const int MAXN = 1e5 + 3;
const int INF = INT_MAX;

vector<vector<pii>> adjList;
int n, dist[MAXN], par[MAXN];
bitset<MAXN> isDone;

bool dijkstra(int s, int t){
    priority_queue<pii, vector<pii>, greater<pii>> pq;
    fill(dist, dist + n + 1, INF);

    pq.push(pii(0, s));
    dist[s] = 0;
    par[s] = -1;

    while (!pq.empty())
    {
        int u = pq.top().second;
        pq.pop();

        if (u == t)
            return true;

        isDone[u] = true;

        for (auto &pr : adjList[u])
        {
            int v = pr.first, w = pr.second;

            if (!isDone[v] && dist[u] + w < dist[v])
            {
                dist[v] = dist[u] + w;
                pq.push(pii(dist[v], v));
                par[v] = u;
            }
        }
    }

    return false;
}

int main(){
    // freopen("in.txt", "r", stdin);

    int m;
    scanf("%d %d", &n, &m);

    adjList.resize(n + 3);

    int u, v, w;

    while (m--) {
        scanf("%d %d %d", &u, &v, &w);
        adjList[u].push_back(pii(v, w));
        adjList[v].push_back(pii(u, w));
    }

    if (dijkstra(1, n)) {
        vector<int> path;

        for (v = n; v != -1; v = par[v])
            path.push_back(v);

        for (int i = path.size() - 1; i > 0; --i)
            printf("%d ", path[i]);

        printf("%d\n", path[0]);
    }
    else
        puts("-1");

    return 0;
}