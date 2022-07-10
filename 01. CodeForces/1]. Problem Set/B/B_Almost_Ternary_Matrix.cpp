/*
     filename: B_Almost_Ternary_Matrix.cpp
     @author: Pawan Gupta [ CodeForces - Mr.pawan_gupta Leetcode - mrpawan-gupta]
     createdAt: 2022-07-10 16:40:46
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void __solve(){

            long long n, m;

            cin >> n >> m;

            for(auto i=1;i<=n;i++){
                for(auto j=1;j<=m;j++){
                    cout<<((i%4<=1)!=(j%4<=1))<<" \n"[j==m];
                }
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