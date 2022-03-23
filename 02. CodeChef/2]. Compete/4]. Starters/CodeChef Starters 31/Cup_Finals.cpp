#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solveTestCase(){
            int X, Y, D;
            cin >> X >> Y >> D;
            int check = abs(X - Y);

            if(check <= D){
                cout << "YES" << '\n';
            }
            else{
                cout << "NO" << '\n';
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