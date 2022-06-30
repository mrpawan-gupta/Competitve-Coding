/*
     filename: B_Star.cpp
     @author: Pawan Gupta [ CodeForces - Mr.pawan_gupta Leetcode - mrpawan-gupta]
     createdAt: 2022-06-30 20:01:14
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void __solve(){
            int n; cin>>n;
	        int dp[n+1];
	        dp[1]=1;
	        for (int i=2;i<=n;i++){
                 dp[i]=dp[i-1]+4*(i+2*i-3);
            }
	        cout<<dp[n];
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