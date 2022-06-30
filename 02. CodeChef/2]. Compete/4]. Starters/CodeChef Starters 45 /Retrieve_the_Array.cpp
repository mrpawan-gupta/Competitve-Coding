/*
     filename: Retrieve_the_Array.cpp
     @author: Pawan Gupta [ CodeForces - Mr.pawan_gupta Leetcode - mrpawan-gupta]
     createdAt: 2022-06-29 20:31:03
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void __solve(){
            long n;
            cin >> n;

            long ___[n];
            long ___sum = 0;
            for(int _ = 0; _ <n; ++_){
                cin >> ___[_];
                ___sum+=___[_];
            }
            long cnt = ___sum / (n+1);
            for(int _ = 0; _ <n; ++_){
                cout << ___[_] - cnt << " ";
            }
            cout << endl;

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