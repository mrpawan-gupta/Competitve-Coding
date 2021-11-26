#include <iostream>
#include <bits/stdc++.h>
#pragma GCC optimize("O3")
#pragma GCC target("sse4")
using namespace std;
#define ull unsigned long long
#define ll long long
#define ld long double
#define pii pair<int, int>
#define um unordered_map<int, int>
#define mii map<int, int>
#define vi vector<int>
#define vll vector<long long>
#define pq priority_queue<int>
#define si stack<int>
#define hi cout << "hello" << endl
#define MOD 1000000007
#define fastio()                      \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define rep(i, a, b) for (int i = a; i < b; i++)
#define precision(a) cout << setprecision(a) << fixed
#define pb push_back
#define amax(a, b) a = max(a, b)
#define amin(a, b) a = min(a, b)
int total = 0;
class Graph
{
    int V;
    list<int> *adj;

public:
    Graph(int V)
    {
        this->V = V;
        adj = new list<int>[V];
    }
    void addEdge(int v, int w)
    {
        adj[v].push_back(w);
        adj[w].push_back(v);
    }
    void DFSUtil(int v, bool visited[], vi &v1)
    {
        visited[v] = true;
        v1.pb(v);
        list<int>::iterator i;
        for (i = adj[v].begin(); i != adj[v].end(); ++i)
            if (!visited[*i])
                DFSUtil(*i, visited, v1);
    }
    void connectedComponents(vector<vi> &p)
    {
        bool *visited = new bool[V];
        for (int v = 0; v < V; v++)
            visited[v] = false;
        for (int v = 0; v < V; v++)
        {
            if (visited[v] == false)
            {
                vi v1;
                DFSUtil(v, visited, v1);
                total++;
                p.push_back(v1);
            }
        }
    }
};
int main()
{
    fastio();
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int conn[n] = {0};
        Graph g(n);
        int x, y;
        rep(i, 0, m)
        {
            cin >> x >> y;
            x--, y--;
            g.addEdge(x, y);
            conn[x]++;
            conn[y]++;
        }
        total = 0;
        vector<vi> v;
        g.connectedComponents(v);
        int worthy = 0;
        rep(i, 0, v.size())
        {
            ll sum = 0;
            rep(j, 0, v[i].size())
            {
                sum += (ll)(conn[v[i][j]]);
            }
            if (sum == ((ll)v[i].size() * ((ll)v[i].size() - (ll)1)))
                worthy++;
        }
        if (total == 1)
            cout << "0\n";
        else
            cout << worthy << endl;
    }
    return 0;
}