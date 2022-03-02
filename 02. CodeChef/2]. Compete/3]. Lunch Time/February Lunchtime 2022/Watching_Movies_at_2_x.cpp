#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solveTestCase(){
            int x, y;
            cin >> x >> y;

            int ans = x - (y / 2);
            cout << ans << endl;
        }
};

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while(t--){
        Solution is_object;
        is_object.solveTestCase();
    }

    return 0;
}