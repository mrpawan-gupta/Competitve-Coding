/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;
const int MN = 4e5 + 1;
const long long mod = 1e9 + 7;
bool gone[MN];
vector<int> adj[MN];

class Solution{
public:
  int arr[MN][2];
  void DFS(int loc){
    gone[loc] = true;
    for (auto x : adj[loc])
      if (!gone[x])
        DFS(x);
  }
  void solve(){
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
      cin >> arr[i][0], adj[i] = vector<int>(), gone[i] = false;
    for (int i = 1; i <= n; i++) cin >> arr[i][1];
    for (int i = 1; i <= n; i++){
      adj[arr[i][0]].push_back(arr[i][1]), adj[arr[i][1]].push_back(arr[i][0]);
    }
    long long ans = 1;
    for (int i = 1; i <= n; i++){
      if (!gone[i]){
        ans = ans * (2) % mod;
        DFS(i);
      }
    }
    cout << ans << '\n';
  }
};

int main(int argc, char const *argv[])
{

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t = 1;
  cin >> t;

  while (t--)
  {
    Solution ob;
    ob.solve();
  }

  return 0;
}