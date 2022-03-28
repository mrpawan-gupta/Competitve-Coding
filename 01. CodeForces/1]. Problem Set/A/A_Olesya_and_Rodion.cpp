/*
    Solution By :- Pawan Gupta [ CF - Mr.pawan_gupta, CC - mrpavan_gupta ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solveTestCase(){
            int n, t;
            cin >> n >> t;

            if(t==10 and n == 1){
                cout << -1 << endl;
                return;
            }

            if(n>=2 and t==10){
                for (int i = 1; i < n; i++){
                    cout << 1;
                }
                cout << 0 << endl;
            }
            else{
                for (int i = 1; i <= n; i++)    {
                    cout << t;
                }
                cout << endl;
            }
        }
};

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while(t--){
        Solution ClassObject;
        ClassObject.solveTestCase();
    }

    return 0;
}