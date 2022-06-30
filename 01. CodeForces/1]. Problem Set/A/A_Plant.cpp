/*
     filename: A_Plant.cpp
     @author: Pawan Gupta [ CodeForces - Mr.pawan_gupta Leetcode - mrpawan-gupta]
     createdAt: 2022-06-30 20:05:13
*/
#include <bits/stdc++.h>
using namespace std;


const int mod = 1e9 + 7;

class Solution{
    public:
        void __solve(){
            long long num;
            cin >> num;

            long long cntA = 2;
            long long cntB = 1;
            while(num){
                if(num&1){
                    cntB = (cntA*cntB) % mod;
                }
                cntA = cntA * cntA% mod;
                num = num >> 1;
            }
            cout << ((cntB+cntB*cntB)/2)%mod;
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