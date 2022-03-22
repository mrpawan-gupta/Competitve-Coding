#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solveTestCase(){
            int i = 0, j, n;
            string s;
            cin >> s;
            int cn1 = 0, cn2 = 0;
            while (s[i]){
                if ((s[i] - '0') % 2 == 0){
                    cn1++;
                }else{
                    cn2++;
                }
                i++;
            }

            if (((s[s.size() - 1]) - '0') & 1){
                if (cn2 >= 2){
                    cout << "YES" << endl;
                }else{
                    cout << "NO" << endl;
                }
            }
            else{
                if (cn1 >= 2){
                    cout << "YES" << endl;
                }else{
                    cout << "NO" << endl;
                }
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