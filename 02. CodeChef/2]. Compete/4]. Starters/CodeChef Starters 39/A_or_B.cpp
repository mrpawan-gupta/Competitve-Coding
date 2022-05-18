/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solve(){
          int x, y;
          cin >> x >> y;
          int countX = (500 - 2 * x ) + (1000 - 4 * (x + y));
          int countY = (1000 - 4 * y )+ (500 - 2 * (x + y));

          cout << max(countX, countY) << endl;
        }
};

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--){
        Solution ob;
        ob.solve();
    }

    return 0;
}