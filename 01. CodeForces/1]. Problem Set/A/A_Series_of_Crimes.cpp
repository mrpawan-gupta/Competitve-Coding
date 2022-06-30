/*
     filename: B_Number_of_Triplets.cpp
     @author: Pawan Gupta [ CodeForces - Mr.pawan_gupta Leetcode - mrpawan-gupta]
     createdAt: 2022-06-30 20:09:25
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void __solve(){
            int n, m;
            cin >> n >> m;
            int x = 0, y = 0;

            for(int i = 0; i < n; ++i){
                string s;
                cin >> s;
                for(int j = 0; j < m; ++j){
                    if(s[j]=='*'){
                        x ^= i;
                        y ^= j;
                    }
                }
            }
            cout << x + 1 << ' ' << y + 1 << endl;
        }
};

int main(int argc, char const *argv[]){

    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin.failbit; cin.badbit;

    int __test = 1;
    //cin >> __test;

    while(__test--){
        Solution __ob;
        __ob.__solve();
    }

    return 0;
}