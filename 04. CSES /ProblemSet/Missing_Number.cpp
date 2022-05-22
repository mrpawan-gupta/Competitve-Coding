/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solve(){
          long long int n, input, sum = 0;
          cin >> n;

          for (int i = 0 ; i < n - 1 ; i++) {
            cin >> input;
            sum += input;
          }

          cout << ( n * (n + 1) ) / 2 - sum << endl;

        }
};

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while(t--){
        Solution ob;
        ob.solve();
    }

    return 0;
}