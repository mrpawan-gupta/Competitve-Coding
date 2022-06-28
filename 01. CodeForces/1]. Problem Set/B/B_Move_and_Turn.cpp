/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void __solve(){
            int n;
            scanf("%d",&n);
	        if(n&1){
	        	n=(n+1)/2;
	        	long long ans=n*(n+1)/2;
	        	printf("%lld\n",ans*4);
	        }
	        else{
	        	printf("%lld\n",1ll*(n/2+1)*(n/2+1));
	        }
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