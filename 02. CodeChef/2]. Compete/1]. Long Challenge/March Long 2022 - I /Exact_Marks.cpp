#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solveTestCase(){
            long n, x;
            cin >> n >> x;

            long a = 0;
            long b = 0;

            if(x%3==0){
                a = (x / 3);
            }
            else if(x%3==2){
                a = (x / 3) + 1;
                b = 1;
            }
            else if(x%3==1){
                a = (x / 3) + 1;
                b = 2;
            }

            if(a+b<=n){
                cout << "YES" << endl;
                cout << a << " " << b << " " << n-a-b << endl;
            }else{
                cout << "NO" << endl;
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