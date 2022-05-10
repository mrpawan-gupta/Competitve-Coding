/*
    Solution By :- Pawan Gupta [ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solve(){
          int n;
        cin >> n;
        int mini = INT_MAX;
        int count = 0;
        for (int i = 0; i < n; i++){
            int x;
            cin >> x;
            count += x;
            mini = min(mini, x);
        }
        cout << count - n * mini << endl;
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