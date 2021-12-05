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
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int n, m;
int ans;
const int N = 1e6 + 50;
string a[N];

void solve(int sum0){
    vector<int> v;
    for (int sum = sum0, ad = 0, pref = 0; sum < n + m; sum += 2, ad++)
    {
        vector<int> cur;
        int li = max(0, sum - m + 1), ri = min(n - 1, sum);
        if (li > ri)
            continue;

        for (int i = li; i <= ri; i++)
        {
            int j = sum - i;

            if (a[i][j] == '1')
                cur.emplace_back(i);
        }

        while (pref != v.size() && v[pref] + ad > ri)
        {
            pref++;
        }
        for (int i = pref; i < v.size(); i++)
        {
            int new_val = v[i];
            while (!cur.empty() && cur.back() - ad >= v[i])
            {
                new_val = max(new_val, cur.back() - ad);
                cur.pop_back();
            }
            v[i] = new_val;
        }
        if (!cur.empty())
        {
            v.emplace_back(cur.back() - ad);
            ans++;
        }
    }
}
int main(){
    fast;

    int t;
    cin >> t;

    while(t--){
        cin >> n >> m;

        for (int i = 0; i < n; i++){
            string s;
            cin >> a[i];
        }

        ans = 0;
        solve(0);
        solve(1);

        cout << ans << '\n';
    }

    return 0;
}
