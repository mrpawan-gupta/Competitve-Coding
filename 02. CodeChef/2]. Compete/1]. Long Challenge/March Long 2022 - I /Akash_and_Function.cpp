#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solveTestCase(){
            int n;
            cin >> n;

            n++;

            cout << (n >> 1) << endl;
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