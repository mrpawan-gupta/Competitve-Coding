#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solveTestCase(){
            int c, x, y;
            cin >> c >> x >> y;

            if(c<=x){
                cout << 0 << endl;
                return;
            }

            long cnt = c - x;
            cnt *= y;

            cout << cnt << endl;
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