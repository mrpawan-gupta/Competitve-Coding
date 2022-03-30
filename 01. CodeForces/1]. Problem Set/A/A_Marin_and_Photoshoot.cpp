/*
    Solution By :- Pawan Gupta [ CF - Mr.pawan_gupta, CC - mrpavan_gupta ]
*/
#include <bits/stdc++.h>
using namespace std;

int n;
string s;
vector<int> v;

class Solution{
    public:
        void solveTestCase(){
            v.clear();
            cin >> n >> s;
            int ans = 0;
            for (int i = 0; i < n; ++i){
                if (s[i] == '0'){
                    v.push_back(i);
                }
            }
            for (int i = 0; i < (int)v.size() - 1; ++i){
                if (v[i + 1] - v[i] <= 2){
                    ans += 2 - (v[i + 1] - v[i]) + 1;
                }       
            }
            cout << ans << '\n';
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