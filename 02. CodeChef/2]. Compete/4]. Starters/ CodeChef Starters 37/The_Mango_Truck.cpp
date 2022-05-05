/*
    Solution By :- Pawan Gupta [ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int checksolve(){
          int x, y, z;
          cin >> x >> y >> z;
          int count = z - y;
          int ans =  count / x;
          return ans ;
        }
};

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--){
        Solution ob;
        cout << ob.checksolve() << endl;
    }

    return 0;
}