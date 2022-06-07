/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;
const int N = 1e4 + 5;
int n, ans[N];
class Solution{
    public:
        int ask(int l, int r){
            cout << "? " << l << " " << r << endl;
            int ret; cin >> ret;
            return ret;
        }

        void answer(){
            cout << "!";
            for(int i = 1;i <= n;i++) cout << " " << ans[i];
            cout << endl;
        }
        void solve(){
            cin >> n;
            ans[n] = ask(1, n);
            ans[1] = ans[n]-ask(2, n);
            for(int i = 2;i <= n-1;i++) ans[i] = ask(i-1, i)-ans[i-1];
            for(int i = 1;i < n;i++) ans[n] -= ans[i];
            answer();
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