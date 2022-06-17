/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solve(){
              int n, m;
                cin >> n >> m;
                vector<vector<int>> g(n);
                vector<vector<int>> gr(n);
                for (int i = 0; i < m; i++) {
                  int x, y;
                  cin >> x >> y;
                  --x; --y;
                  g[x].push_back(y);
                  gr[y].push_back(x);
                }
                vector<int> deg(n);
                for (int i = 0; i < n; i++) {
                  deg[i] = (int) g[i].size();
                }
                const int inf = (int) 1e9;
                vector<int> d(n, inf);
                d[n - 1] = 0;
                set<pair<int, int>> s;
                s.emplace(d[n - 1], n - 1);
                while (!s.empty()) {
                  int i = s.begin()->second;
                  s.erase(s.begin());
                  for (int j : gr[i]) {
                    --deg[j];
                    int ft = d[i] + 1 + deg[j];
                    if (ft < d[j]) {
                      s.erase(make_pair(d[j], j));
                      d[j] = ft;
                      s.emplace(d[j], j);
                    }
                  }
                }
                cout << d[0] << '\n';

        }
};

int main(int argc, char const *argv[]){

    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin.failbit; cin.badbit;

    int t = 1;
    //cin >> t;

    while(t--){
        Solution ob;
        ob.solve();
    }

    return 0;
}