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
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> k >> n;
        vector<pair<int, int>> v(k);
        for (int i = 0; i < k; i++)
            cin >> v[i].first >> v[i].second;
        if (k >= 4)
        {
            cout << "yes"
                 << "\n";
            continue;
        }
        bool ans = 0;
        for (int i = 0; i < k; i++)
        {
            if (v[i].first == 0 && v[i].second == 0)
                ans = 1;
            else if (v[i].first == 0 && v[i].second == n - 1)
                ans = 1;
            else if (v[i].first == n - 1 && v[i].second == n - 1)
                ans = 1;
            else if (v[i].first == n - 1 && v[i].second == 0)
                ans = 1;
        }

        for (int i = 0; i < k; i++)
        {
            for (int j = i + 1; j < k; j++)
            {
                if ((v[i].first == 0 || v[i].first == n - 1) && (v[j].first == 0 || v[j].first == n - 1))
                    ans = 1;
                if ((v[i].second == 0 || v[i].second == n - 1) && (v[j].second == 0 || v[j].second == n - 1))
                    ans = 1;
            }
        }

        if (k == 3)
        {
            int cnt = 0;
            for (int i = 0; i < k; i++)
            {
                if (v[i].first == 0 || v[i].first == n - 1 || v[i].second == 0 || v[i].second == n - 1)
                    cnt++;
            }
            if (cnt >= 2)
                ans = 1;

            for (int i = 0; i < k; i++)
            {
                int p = (i + 1) % 3;
                int q = (i + 2) % 3;
                if (v[i].first == 0)
                {
                    if (v[p].second <= v[i].second && v[q].second <= v[i].second)
                        ans = 1;
                    if (v[p].second >= v[i].second && v[q].second >= v[i].second)
                        ans = 1;
                }
                else if (v[i].first == n - 1)
                {
                    if (v[p].second <= v[i].second && v[q].second <= v[i].second)
                        ans = 1;
                    if (v[p].second >= v[i].second && v[q].second >= v[i].second)
                        ans = 1;
                }
                else if (v[i].second == n - 1)
                {
                    if (v[p].first <= v[i].first && v[q].first <= v[i].first)
                        ans = 1;
                    if (v[p].first >= v[i].first && v[q].first >= v[i].first)
                        ans = 1;
                }
                else if (v[i].second == 0)
                {
                    if (v[p].first <= v[i].first && v[q].first <= v[i].first)
                        ans = 1;
                    if (v[p].first >= v[i].first && v[q].first >= v[i].first)
                        ans = 1;
                }
            }
        }
        if (ans)
            cout << "yes"
                 << "\n";
        else
            cout << "no"
                 << "\n";
    }
    return 0;
}
