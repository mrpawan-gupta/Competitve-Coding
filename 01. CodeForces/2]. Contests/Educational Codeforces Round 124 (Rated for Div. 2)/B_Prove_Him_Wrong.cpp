#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solveTestCase(){
            int n;
            cin >> n;
            int arr[n];
            arr[0] = 1;
            for (int i = 1; i < n; i++){
                arr[i] = 3 * arr[i - 1] + 1;
            }
            bool check = 0;
            for (int i = 0; i < n; i++) {
                if (arr[i] > 1000000000)
                {
                    cout << "NO" << endl;
                    check = 1;
                    break;
                }
            }
            if (check){
                return;
            }
            cout << "YES" << endl;
            for (int i = 0; i < n; i++){
                cout << arr[i] << " ";
            }
            cout << endl;
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