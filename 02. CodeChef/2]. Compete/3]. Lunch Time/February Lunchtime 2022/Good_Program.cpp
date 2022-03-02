#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solveTestCase(){
            int n;
            cin >> n;

            if(n%4==0){
                cout << "Good" << endl;
            }else{
                cout << "Not Good" << endl;
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