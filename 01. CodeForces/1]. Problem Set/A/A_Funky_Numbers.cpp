/*
     filename: A_Funky_Numbers.cpp
     @author: Pawan Gupta [ CodeForces - Mr.pawan_gupta Leetcode - mrpawan-gupta]
     createdAt: 2022-06-30 20:14:51
*/
#include <bits/stdc++.h>
using namespace std;

long long i, m = 1000, n, l[1005];


class Solution{
    public:
        void __solve(){
            long long n;
            cin >> n;
            map<long long, bool> m;
            for (long long i = 1; i < 50000; ++i) {
                long long sum = (i * (i + 1)) / 2;
                m[sum] = true;
                if (m[n - sum]){
                    cout << "YES" << endl;
                    return;
                }

            }
            cout << "NO" << endl;
    
        }
        
};

int main(int argc, char const *argv[]){

    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin.failbit; cin.badbit;

    long long __test = 1;
    //cin >> __test;

    while(__test--){
        Solution __ob;
        __ob.__solve();
    }

    return 0;
}