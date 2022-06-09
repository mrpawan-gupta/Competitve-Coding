/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;
int arr[102400];
class Solution{
    public:
        void solve(){
            int n; cin >> n;
            int b;
            for(int i = 0; i < n; arr[b]=++i){
                cin >> b;
            }
            for(int i = 0; i < n; ++i){
                cin >> b;
                cout << arr[b] << " ";
            }
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