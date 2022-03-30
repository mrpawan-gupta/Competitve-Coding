/*
    Solution By :- Pawan Gupta [ CF - Mr.pawan_gupta, CC - mrpavan_gupta ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solveTestCase(){
            int a, b, c;
            cin >> a >> b >> c;
            if (b >= (a + c)) {
                cout << "Yes" << endl;
            }
            else{
                cout << "No" << endl;
            }
        }
};

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--){
        Solution ClassObject;
        ClassObject.solveTestCase();
    }

    return 0;
}