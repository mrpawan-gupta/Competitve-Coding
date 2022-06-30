/*
     filename: Change_Row_and_Column_Both.cpp
     @author: Pawan Gupta [ CodeForces - Mr.pawan_gupta Leetcode - mrpawan-gupta]
     createdAt: 2022-06-29 20:42:17
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void __solve(){
            int x, y;
            cin >> x >> y;
            int u , v;
            cin >> u >> v;
            if(u!= x and v!=y){
                cout << 1 << endl;
            }else{
                cout << 2 << endl;
            }
        }
};

int main(int argc, char const *argv[]){

    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin.failbit; cin.badbit;

    int __test = 1;
    cin >> __test;

    while(__test--){
        Solution __ob;
        __ob.__solve();
    }

    return 0;
}