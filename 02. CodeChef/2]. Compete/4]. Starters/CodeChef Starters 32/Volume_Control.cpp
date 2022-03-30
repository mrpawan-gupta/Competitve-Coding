/*
    Solution By :- Pawan Gupta [ CF - Mr.pawan_gupta, CC - mrpavan_gupta ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solveTestCase(){
            int x, y;
            cin >> x >> y;
            int c = y - x;
            cout << abs(c) << endl;
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