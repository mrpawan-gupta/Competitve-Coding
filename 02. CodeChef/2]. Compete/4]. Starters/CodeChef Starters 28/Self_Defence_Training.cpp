#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solveTestCase(){
            int n;
            cin >> n;
            int cnt = 0;

            while(n--){
                int x;
                cin >> x;

                if(x>=10 and x<=60){
                    cnt++;
                }
            }
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