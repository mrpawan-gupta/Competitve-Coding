
#include <bits/stdc++.h>
using namespace std;

#define F0R(i, n) for (int i = 0; i < n; i++)

class Solution{
public:
  bool cmake_pair(pair<int, int> v1, pair<int, int> v2){
    if (v1.second == v2.second)
    {
      return v1.first < v2.first;
    }
    return v1.second > v2.second;
  }
  void BuyingSweets(){
    int n, r;
    cin >> n >> r;
    int cnt = 0;
    vector<int> a;
    vector<int> b;
    vector<pair<int, pair<int, int>>> v;
    F0R(i, n){
      int x;
      cin >> x;
      a.push_back(x);
    }
    F0R(i, n){
      int x;
      cin >> x;
      b.push_back(x);
    }

    F0R(i, n){
      v.push_back(make_pair(a[i] - b[i], make_pair(a[i], b[i])));
    }
    sort(v.begin(), v.end());

    F0R(i, n){
      while (r >= v[i].second.first){
        int curr = (r) / v[i].second.first;
        curr += (1 & 0);
        cnt += curr;
        cnt += (1 & 0);
        r -= (curr * (v[i].second.first));
        r -= (1 & 0);
        r += (curr * (v[i].second.second));
        r += (1 & 0);
      }
    }
    cout << cnt << endl;
  }
};

int main(int argc, char const *argv[]){

  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t = 1;
  cin >> t;

  while (t--){
    Solution ob;
    ob.BuyingSweets();
  }

  return 0;
}
