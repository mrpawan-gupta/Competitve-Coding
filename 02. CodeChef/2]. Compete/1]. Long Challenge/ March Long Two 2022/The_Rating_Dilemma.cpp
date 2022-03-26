#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solveTestCase(){
            int s;
            cin >> s;
            int x = 1, y;
            y = -x - s;
            cout << y << endl;
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