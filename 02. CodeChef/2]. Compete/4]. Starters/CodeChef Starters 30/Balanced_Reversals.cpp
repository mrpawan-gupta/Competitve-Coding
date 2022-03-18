#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solveTestCase(){
            int n = 0;
            cin >> n;

            string s = "", s1 = "";
            cin >> s;

            int one_count = 0, zero_count = 0;

            for (int i = 0; i < n; i++){
                if (s[i] == '1'){
                    one_count += 1;
                }
                else{
                    zero_count += 1;
                }
            }

            for (int x = 0; x < one_count; x++){
                s1.push_back('1');
            }

            for (int x = 0; x < zero_count; x++){
                s1.push_back('0');
            }

            reverse(s1.begin(), s1.end());

            cout << s1 << endl;
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