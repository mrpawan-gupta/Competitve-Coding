#include <bits/stdc++.h>
using namespace std;
using l = long;
using ll = long long int;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<l>;
using vvl = vector<vl>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
const l mod = 1e9 + 7, inf = 1e18;
#define pb push_back
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

void DFS(vvl &graph, vl &gcd, l idx1, l idx2)
{
    for (auto &to : graph[idx1])
    {
        if (to == idx2)
            continue;
        DFS(graph, gcd, to, idx1);
        gcd[idx1] = __gcd(gcd[idx1], gcd[to]);
    }
}

l ans = 0;

void DFS1(vvl &graph, vl &gcd, l u, l par, l exc, vl &arr)
{
    l temp = exc;
    for (auto &to : graph[u])
    {
        if (to == par)
            continue;
        temp += gcd[to];
    }
    ans = max(ans, temp);
    l transfer = __gcd(arr[u], exc);
    l n = graph[u].size();
    if (par != -1)
    {
        n--;
    }
    vl pref(n + 2, transfer), suff(n + 2, transfer);
    l idx = 0;
    for (auto &to : graph[u])
    {
        if (to == par)
            continue;
        idx++;
        pref[idx] = __gcd(pref[idx], gcd[to]);
        suff[idx] = __gcd(suff[idx], gcd[to]);
    }
    for (l i = 1; i <= n; i++)
    {
        pref[i] = __gcd(pref[i], pref[i - 1]);
    }
    for (l i = n; i >= 1; i--)
    {
        suff[i] = __gcd(suff[i], suff[i + 1]);
    }
    idx = 0;
    for (auto &to : graph[u])
    {
        if (to == par)
            continue;
        idx++;
        l combine = __gcd(pref[idx - 1], suff[idx + 1]);
        DFS1(graph, gcd, to, u, combine, arr);
    }
}

int main()
{
    fast;

    int t;
    cin >> t;
    while (t--)
    {
        l n;
        cin >> n;
        ans = 0;
        vvl graph(n);
        for (l i = 0; i < n - 1; i++)
        {
            l u, v;
            cin >> u >> v;
            u--, v--;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        vl arr(n);
        for (l i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        vl gcd(arr.begin(), arr.end());
        DFS(graph, gcd, 0, -1);
        DFS1(graph, gcd, 0, -1, 0, arr);
        cout << ans << endl;
    }

    return 0;
}
