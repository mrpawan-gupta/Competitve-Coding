/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solve(){
            vector<string> s(9);
            for (int i = 0; i < 9; i++) {
              cin >> s[i];
            }
            vector<int> a = {0, 4, 8, 1, 5, 6, 2, 3, 7};
            for (int i = 0; i < 9; i++) {
              int j = a[i];
              s[i][j] = (s[i][j] == '9' ? '1' : s[i][j] + 1);
            }
            for (int i = 0; i < 9; i++) {
              cout << s[i] << '\n';
            }
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