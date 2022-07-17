/*
     filename: A_LCM_Challenge.cpp
     @author: Pawan Gupta [ CodeForces - Mr.pawan_gupta Leetcode - mrpawan-gupta]
     createdAt: 2022-07-17 19:40:55
*/
#include <bits/stdc++.h>
using namespace std;

int n;
long long ans;
class Solution{
    public:
        void __solve(){
            cin >> n;
            for (int i=max(1,n-100);i<=n;i++)
		        for (int j=max(1,n-100);j<=n;j++)
                     if (__gcd(i,j)==1)
		        	    for (int k=max(1,n-100);k<=n;k++)
                            if (__gcd(i,k)==1&&__gcd(j,k)==1) 
                                ans=max(ans,(long long)i*j*k);

            cout << ans << endl;
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