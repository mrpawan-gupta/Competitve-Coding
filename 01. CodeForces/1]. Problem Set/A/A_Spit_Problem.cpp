/*
    Solution By :- Pawan Gupta [ CF - Mr.pawan_gupta, CC - mrpavan_gupta ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solveTestCase(){
            int n, i, x, d;
            cin >> n;
            vector<int> pos(6e4 + 1, -1);
            for (i = 0; i < n; i++){
                cin >> x >> d;
                x += 3e4;
                if (pos[x] == x + d)
                    break;
                pos[x + d] = x;
            }
            cout << ((i == n) ? "NO" : "YES") << endl;
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