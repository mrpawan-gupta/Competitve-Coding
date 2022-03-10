#include <bits/stdc++.h>
using namespace std;
#define forn(i, n) for (int i = 0; i < int(n); i++)

class Solution{
    public:
        void solveTestCase(){
            string s, t;
            cin >> s >> t;
            bool yes = false;
            forn(i, s.length()) if (s[i] == t[0] && i % 2 == 0)
                yes = true;
            cout << (yes ? "YES" : "NO") << endl;
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