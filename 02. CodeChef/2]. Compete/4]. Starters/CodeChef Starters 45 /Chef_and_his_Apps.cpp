/*
     filename: Chef_and_his_Apps.cpp
     @author: Pawan Gupta [ CodeForces - Mr.pawan_gupta Leetcode - mrpawan-gupta]
     createdAt: 2022-06-29 20:43:42
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void __solve(){
            int _, __, ___, ____;
            cin >> _ >> __ >> ___ >> ____;

            if(__+___+____ <= _){
                cout << 0 << endl;
            }
            else if(_>=min(__,___)+____){
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