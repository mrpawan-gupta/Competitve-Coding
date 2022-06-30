/*
     filename: Xor_and_Multiply.cpp
     @author: Pawan Gupta [ CodeForces - Mr.pawan_gupta Leetcode - mrpawan-gupta]
     createdAt: 2022-06-29 21:13:35
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void __solve(){
            long n;
            long a,b;

            cin >> n >> a >>b;

            long ___ans = 0;

            long ___max  = 0;

            for(int __idx = 0; __idx < n; ++__idx){
                long ____count = 1 << __idx;
                bool ___checkA = false;
                bool ___checkB = false;
                if((____count&a)!= 0){
                    ___checkA = true;
                }
                if((____count&b)!= 0){
                    ___checkB = true;
                }
                if(___checkA != ___checkB){   
                    ___max = max(___max,____count);
                }
                else{
                    ___ans += ____count;
                }
            }
            ___ans +=  ___max;
            cout << (a^___ans) << endl;

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