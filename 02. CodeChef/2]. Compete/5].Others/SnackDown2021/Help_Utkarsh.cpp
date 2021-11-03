#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<long>;
using vvl = vector<vl>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
const ll mod = 1e9 + 7, inf = 1e18;
#define pb push_back
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

const int maxN = 110000, maxL = 2200000;
string s[maxN];
int chd[maxL][26], go[maxL][26];
int q[maxL], state[maxL], par[maxL], fir[maxL], sec[maxL], len[maxL], dp1[maxL], vis[maxL];
int ch1[maxL][26], g1[maxL][26];
int stat1[maxL], pa1[maxL], fi1[maxL], se1[maxL], le1[maxL], dp2[maxL];

int main()
{
    fast;

    int T;
    for (cin >> T; T; T--)
    {
        int m = 1, m2 = 1, ans = 0, n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> s[i];
            for (int cur = 1, j = 0; j < s[i].length(); j++)
            {
                int &now = chd[cur][s[i][j] - 'a'];
                if (!now)
                    now = ++m;
                state[i] = cur = now;
            }
            len[state[i]] = s[i].length();
            reverse(s[i].begin(), s[i].end());
            for (int cur = 1, j = 0; j < s[i].length(); j++)
            {
                int &now = ch1[cur][s[i][j] - 'a'];
                if (!now)
                    now = ++m2;
                stat1[i] = cur = now;
            }
            le1[stat1[i]] = s[i].length();
            reverse(s[i].begin(), s[i].end());
        }
        int qn = 0;
        par[1] = 1;
        for (int i = 0, v; i < 26; i++)
            if (v = chd[1][i])
                q[qn++] = go[1][i] = v, par[v] = 1;
            else
                go[1][i] = 1;
        for (int i = 0; i < qn; i++)
        {
            for (int cur = q[i], j = 0, u, v; j < 26; j++)
            {
                if (u = chd[cur][j])
                {
                    for (go[cur][j] = u, v = par[cur]; v > 1 && !chd[v][j]; v = par[v])
                        ;
                    v = max(1, chd[v][j]);
                    q[qn++] = u, par[u] = v;
                }
                else
                    go[cur][j] = go[par[cur]][j];
            }
        }
        qn = 0;
        pa1[1] = 1;
        for (int i = 0, v; i < 26; i++)
            if (v = ch1[1][i])
                q[qn++] = g1[1][i] = v, pa1[v] = 1;
            else
                g1[1][i] = 1;
        for (int i = 0; i < qn; i++)
        {
            for (int cur = q[i], j = 0, u, v; j < 26; j++)
            {
                if (u = ch1[cur][j])
                {
                    for (g1[cur][j] = u, v = pa1[cur]; v > 1 && !ch1[v][j]; v = pa1[v])
                        ;
                    v = max(1, ch1[v][j]);
                    q[qn++] = u, pa1[u] = v;
                }
                else
                    g1[cur][j] = g1[pa1[cur]][j];
            }
        }
        q[0] = qn = 1;
        for (int i = 0; i < qn; i++)
        {
            int k = q[i];
            if (len[k])
                fir[k] = k, sec[k] = fir[par[k]];
            else
                fir[k] = fir[par[k]], sec[k] = sec[par[k]];
            for (int j = 0; j < 26; j++)
                if (chd[q[i]][j])
                    q[qn++] = chd[q[i]][j];
        }
        q[0] = qn = 1;
        for (int i = 0; i < qn; i++)
        {
            int k = q[i];
            if (le1[k])
                fi1[k] = k, se1[k] = fi1[pa1[k]];
            else
                fi1[k] = fi1[pa1[k]], se1[k] = se1[pa1[k]];
            for (int j = 0; j < 26; j++)
                if (ch1[q[i]][j])
                    q[qn++] = ch1[q[i]][j];
        }
        for (int i = 0; i < n; i++)
        {
            fill(dp1, dp1 + s[i].length(), 0);
            fill(dp2, dp2 + s[i].length() + 1, 0);
            int f1;
            for (int cur = 1, j = 0; j < s[i].length(); j++)
            {
                f1 = cur = go[cur][s[i][j] - 'a'];
                int mx = len[j != s[i].length() - 1 ? fir[cur] : sec[cur]];
                dp1[j] = max(dp1[j], mx);
            }
            for (int j = 1; j < s[i].length(); j++)
                dp1[j] = max(dp1[j], dp1[j - 1]);
            reverse(s[i].begin(), s[i].end());
            for (int cur = 1, j = 0; j < s[i].length(); j++)
            {
                cur = g1[cur][s[i][j] - 'a'];
                int mx = le1[j != s[i].length() - 1 ? fi1[cur] : se1[cur]];
                dp2[s[i].length() - j - 1] = max(dp2[s[i].length() - j - 1], mx);
            }
            for (int j = s[i].length() - 2; j >= 0; j--)
                dp2[j] = max(dp2[j], dp2[j + 1]);
            int sol = 0;
            for (int j = 0; j < s[i].length(); j++)
                sol = max(sol, dp1[j] + dp2[j + 1]);
            if (!vis[f1])
            {
                ans += s[i].length() - sol;
                vis[f1] = 1;
            }
        }
        cout << ans << '\n';
        for (int i = 1; i <= m; i++)
        {
            for (int j = 0; j < 26; j++)
                chd[i][j] = 0;
            len[i] = 0;
        }
        for (int i = 1; i <= m2; i++)
        {
            for (int j = 0; j < 26; j++)
                ch1[i][j] = 0;
            le1[i] = 0;
        }
        fill(vis, vis + m + 1, 0);
    }

    return 0;
}
