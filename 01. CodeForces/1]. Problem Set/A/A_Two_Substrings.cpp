/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
public:
  void solve(){
    string s;
    cin >> s;
    string pat = "AB";
    bool cntAB = 0, cntBA = 0;
    int x = 1;
    for (int i = 0; i < s.size() - 1; i += x){
      x = 1;
      if (s[i] == 'A' and s[i + 1] == 'B' and cntAB == 0){
        cntAB = 1;
        i += 2;
        x = 0;
      }
      if (cntAB == 1) {
        if (s[i] == 'B' and s[i + 1] == 'A'){
          cntBA = 1;
        }
      }
    }
    if (cntAB == 0 || cntBA == 0){
      cntAB = 0;
      cntBA = 0;
      for (int i = 0; i < s.size() - 1; i += x){
        x = 1;
        if (s[i] == 'B' and s[i + 1] == 'A' and cntBA == 0) {
          cntBA = 1;
          i += 2;
          x = 0;
        }
        if (cntBA == 1) {
          if (s[i] == 'A' and s[i + 1] == 'B'){
            cntAB = 1;
          }
        }
      }
    }
    if (cntAB == 1 and cntBA == 1)cout << "YES";
    else cout << "NO";
  }
};

int main(int argc, char const *argv[])
{

  int t = 1;
  // cin >> t;

  while (t--)
  {
    Solution ob;
    ob.solve();
  }

  return 0;
}