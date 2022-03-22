#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solveTestCase(){
            int n, x = 0;
            cin >> n;
            if (n % 10 == 0){
                cout << n / 10 << endl;
            }
            else if (n % 5 == 0){
                while (n > 0){
                    n -= 10;
                    x++;
                }
                n += 10;
                cout << (x - 1) + (n / 5) << endl;
            }
            else {
                cout << -1 << endl;
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