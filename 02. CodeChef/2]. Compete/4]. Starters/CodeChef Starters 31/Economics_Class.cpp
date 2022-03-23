#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solveTestCase(){
            int n, cnt = 0;
            cin >> n;
            vector<int> array(n, -1);

            for (int i = 0; i < n; i++){
                cin >> array[i];
            }
            for (int i = 0; i < n; i++){
                int temp;
                cin >> temp;
                if (temp == array[i])
                    cnt++;
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