/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/


#include <bits/stdc++.h>
using namespace std;


#define Rep(i, b) for (int i = (0); i < (b); ++i)

class Solution{
    public:
        int solveSolution(){
          int n; cin >> n;

          map<int , int> iMap;
          int array[n];

          Rep(i,n){
              cin >> array[i];
          }
          iMap.clear();
          int r = n-1 , result = n ,j =0 ;

          Rep(i,n){
              r= n-i-1;
              int cnt;
              j = max(iMap.find(array[i]) != iMap.end() ? cnt = iMap[array[i]] : cnt = 0 , j);
              iMap[array[i]] = 1 + i;
              result= min(result, min(j , r)+j+r);
          }

          return result;
        }
};

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--){
        Solution ob;
        int ans = ob.solveSolution();
        cout << ans << '\n';
    }

    return 0;
}