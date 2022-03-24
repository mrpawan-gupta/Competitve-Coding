#include <cstdio>
#include <algorithm>
#include <queue>
using namespace std;
#define ll long long
const int N = 3e5;
struct _
{
    int i, j, x, y;
} a[N];
ll T, n, mo = 998244353, du[N], du2[N], num[N], vis[N], pd[N], Max[N], B;
vector<_> vec[N];
vector<int> sushu[N];
queue<int> q;
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll ksm(ll a, ll x)
{
    ll ans = 1;
    while (x)
    {
        if (x & 1)
            ans = ans * a % mo;
        a = a * a % mo;
        x >>= 1;
    }
    return ans;
}
int cmp(_ a, _ b) { return a.i < b.i; }
void dfs(int x)
{
    // printf("%d\n",x);
    vis[x] = 1;
    for (int i = 0; i < vec[x].size(); ++i)
        if (!vis[vec[x][i].j])
        {
            int y = vec[x][i].j;

            int vx = vec[x][i].x, vy = vec[x][i].y;

            for (int j = 0; j < sushu[vx].size(); ++j)
                pd[sushu[vx][j]]++, Max[sushu[vx][j]] = max(Max[sushu[vx][j]], pd[sushu[vx][j]]);
            // printf("Q%d %d %d\n",y,vy,sushu[vy].size());
            for (int j = 0; j < sushu[vy].size(); ++j)
                pd[sushu[vy][j]]--;
            // printf("EEE%d %d\n",x,y);
            dfs(y);
            for (int j = 0; j < sushu[vx].size(); ++j)
                pd[sushu[vx][j]]--;
            for (int j = 0; j < sushu[vy].size(); ++j)
                pd[sushu[vy][j]]++;
        }
}
void dfs(int x, ll v)
{
    vis[x] = 1;
    num[x] = v;
    for (int i = 0; i < vec[x].size(); ++i)
        if (!vis[vec[x][i].j])
        {
            int y = vec[x][i].j;
            ll vx = vec[x][i].x, vy = vec[x][i].y;
            dfs(y, v * vy % mo * ksm(vx, mo - 2) % mo);
        }
}
void find(int n)
{
    int x = n;
    for (int i = 2; i * i <= x; ++i)
        if (x % i == 0)
        {
            while (x % i == 0)
            {
                sushu[n].push_back(i);
                x /= i;
            }
        }
    if (x > 1)
        sushu[n].push_back(x);
}
int main()
{
    scanf("%d", &T);
    for (int i = 1; i <= 200000; ++i)
        find(i);
    while (T--)
    {
        scanf("%d", &n);
        while (!q.empty())
            q.pop();
        for (int i = 1; i <= n; ++i)
            du[i] = pd[i] = Max[i] = 0, vec[i].clear();
        for (int i = 1; i < n; ++i)
        {
            scanf("%d%d%d%d", &a[i].i, &a[i].j, &a[i].x, &a[i].y);
            int v = gcd(a[i].x, a[i].y);
            a[i].x /= v, a[i].y /= v;
            du[a[i].i]++, du[a[i].j]++;
            vec[a[i].i].push_back(a[i]);
            swap(a[i].i, a[i].j);
            swap(a[i].x, a[i].y);
            vec[a[i].i].push_back(a[i]);
        }
        for (int i = 1; i <= n; ++i)
            vis[i] = 0;
        dfs(1);

        B = 1;
        for (ll i = 1; i <= n; ++i)
            while (Max[i])
                B = B * i % mo, Max[i]--;
        for (int i = 1; i <= n; ++i)
            vis[i] = 0;
        vis[1] = 1;
        // printf("ss%lld\n",B);
        dfs(1, B);
        ll tot = 0;
        // for (int i=1;i<=n;++i)printf(" %d"+(i==1),num[i]);printf("\n");
        for (int i = 1; i <= n; ++i)
            tot = (tot + num[i]) % mo;
        printf("%lld\n", tot);
    }
}