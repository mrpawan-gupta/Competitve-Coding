#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solveTestCase(){
            int x;
            cin >> x;

            if(x<=15){
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
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