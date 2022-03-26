#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solveTestCase(){
            int X, Y, A, B;
            cin >> X >> Y >> A >> B;

            int count = 0;

            if(X!=A && X!=B){
                count++;
            }
            if(Y!=A && Y!=B){
                count++;
            }
            cout << count << endl;
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