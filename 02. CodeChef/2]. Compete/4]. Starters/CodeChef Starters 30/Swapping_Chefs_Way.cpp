#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solveTestCase(){
            int n = 0;
            cin >> n;

            string s = "";
            cin >> s;

            for (int i = 0, j = (n - 1); i <= j; i++, j--){
                if (s[i] > s[j]) {
                    swap(s[i], s[j]);
                }
            }

            bool sorted = true;

            for (int i = 0, j = 1; j < n; i++, j++) {
                if (s[i] > s[j]){
                    sorted = false;

                    break;
                }
            }

            if (sorted) {
                cout << "YES" << endl;
            }
            else {
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