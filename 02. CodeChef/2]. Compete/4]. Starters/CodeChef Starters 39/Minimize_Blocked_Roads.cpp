/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
  int solve(){
    int n, k;
    cin >> n >> k;
    k = n - k;
    vector<vector<int>> Adj(n);
    set<pair<int, int>> Roads;
    for (int i = 0; i < n - 1; i++){
      int u, v, id;
      cin >> u >> v >> id;
      u--, v--;
      if (id)
        Roads.insert({min(u, v), max(u, v)});
      Adj[u].push_back(v);
      Adj[v].push_back(u);
    }
    vector<int> Tree(n);
    auto DFS1 = [&](int u, int check, const auto &DFS1) -> void{
      Tree[u] = 1;
      for (int v : Adj[u]){
        if (v != check){
          DFS1(v, u, DFS1);
          Tree[u] += Tree[v];
        }
      }
    };
    DFS1(0, -1, DFS1);
    multiset<int, greater<int>> Dist;
    auto DFS2 = [&](int u, int check, const auto &DFS2) -> void{
      for (int v : Adj[u]){
        if (v != check){
          if (Roads.find({min(u, v), max(u, v)}) != Roads.end())
            Dist.insert(Tree[v]);
          else
            DFS2(v, u, DFS2);
        }
      }
    };
    DFS2(0, -1, DFS2);
    int count = 0;
    for (int id : Dist){
      if (k <= 0)
        break;
      k -= id;
      count++;
    }
    if (k > 0)
      return -1;
    return count;
  }
};

int main(int argc, char const *argv[]){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t = 1;
  cin >> t;

  while (t--){
    Solution ob;
    cout << ob.solve() << endl;
  }

  return 0;
}
