#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solveTestCase(){
            int a, b, c, d;
            cin >> a >> b >> c >> d;

            cout << max(abs(a - c), abs(b - d)) << "\n";
        }
};

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        Solution is_object;
        is_object.solveTestCase();
    }

    return 0;
}