#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solveTestCase(){
            int x1, x2;
            int y1, y2;
            cin >> x1 >> x2;
            cin >> y1 >> y2;

            double d1 = (y1 * (1.0)) / x1;
            double d2 = (y2 * (1.0)) / x2;

            if(d1>d2){
                cout << 1 << endl;
            }else if (d1<d2){
                cout << -1 << endl;
            }else{
                cout << 0 << endl;
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