#include <cstdio>
#include <cstring>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
const int maxn = 2e5 + 5;
const int inf = 1e9 + 8;
const long long mod = 1e9 + 7;
int N, M;
struct edge
{
    int v, c;
};
vector<edge> G[maxn];
int S, F;

struct Dij
{
    int u, c, flog;
    bool operator<(const Dij &r) const
    {
        return c > r.c;
    }
};

int dist[maxn][2], vis[maxn][2];
long long dp[maxn][2];
void dijkstra()
{
    for (int i = 0; i <= N; i++)
        dist[i][0] = dist[i][1] = inf;
    for (int i = 0; i <= N; i++)
        vis[i][0] = vis[i][1] = 0;
    for (int i = 0; i <= N; i++)
        dp[i][0] = dp[i][1] = 0;
    dp[S][0] = 1;
    dist[S][0] = 0;
    priority_queue<Dij> que;
    que.push((Dij){S, 0, 0});
    while (!que.empty())
    {
        Dij tp = que.top();
        que.pop();
        int u = tp.u, flog = tp.flog; //使用这个状态更新其他的
        if (vis[u][flog])
            continue;
        vis[u][flog] = 1;
        for (int i = 0; i < G[u].size(); i++)
        {
            int v = G[u][i].v, c = G[u][i].c;
            int w = dist[u][flog] + c;
            if (w < dist[v][0]) //更新次短路?最短路
            {
                if (dist[v][0] != inf)
                {
                    dist[v][1] = dist[v][0];
                    dp[v][1] = dp[v][0];
                    que.push((Dij){v, dist[v][1], 1});
                }
                dist[v][0] = w;
                dp[v][0] = dp[u][flog];
                que.push((Dij){v, dist[v][0], 0});
            }
            else if (w == dist[v][0]) //更新方法数
                dp[v][0] += dp[u][flog], dp[v][0] %= mod;
            else if (w < dist[v][1]) //更新次短路
            {
                dist[v][1] = w;
                dp[v][1] = dp[u][flog];
                que.push((Dij){v, dist[v][1], 1});
            }
            else if (w == dist[v][1]) //更新方法数
                dp[v][1] += dp[u][flog], dp[v][1] %= mod;
        }
    }
}

signed main()
{
    int T;
    scanf("%d", &T);
    while (T--)
    {
        scanf("%d%d", &N, &M);
        for (int i = 0; i <= N; i++)
            G[i].clear();
        scanf("%d%d", &S, &F);
        for (int i = 0; i < M; i++)
        {
            int u, v, t;
            scanf("%d%d", &u, &v);
            G[u].push_back((edge){v, 1});
            G[v].push_back((edge){u, 1});
        }

        dijkstra();
        if (dist[F][1] - dist[F][0] == 1)
            printf("%lld\n", (dp[F][0] + dp[F][1]) % mod);
        else
            printf("%lld\n", dp[F][0] % mod);
    }
    return 0;
}