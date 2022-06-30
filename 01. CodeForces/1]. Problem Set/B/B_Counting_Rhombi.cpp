/*
     filename: B_Counting_Rhombi.cpp
     @author: Pawan Gupta [ CodeForces - Mr.pawan_gupta Leetcode - mrpawan-gupta]
     createdAt: 2022-06-30 20:13:39
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void __solve(){
            long long a,b;
            cin>>a>>b;
            
            cout<<a*a/4*(b*b/4);
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