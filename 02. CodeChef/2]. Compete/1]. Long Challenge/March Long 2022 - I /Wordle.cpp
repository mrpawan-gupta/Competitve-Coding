#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solveTestCase(){
            string s1, s2;
            cin >> s1 >> s2;

            string s = "";

            for (int i = 0; i < 5; i++){
                if(s1[i]==s2[i]){
                    s.push_back('G');
                }else{
                    s.push_back('B');
                }
            }

            cout << s << endl;
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