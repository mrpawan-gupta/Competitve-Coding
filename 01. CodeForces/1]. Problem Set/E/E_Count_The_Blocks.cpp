/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

const long long mod = 998244353; 

int n;
long long pw[201000];

class Solution{
    public:
        void solve(){
            scanf("%d",&n);
	        pw[0]=1;
	        for (int i=1;i<=n;i++) pw[i]=pw[i-1]*10%mod;
	        for (int i=1;i<=n;i++) {
		        if (i==n) { puts("10"); continue; }
		        int d=0;
		        if (i<=n-2) d=(d+10*(n-i-1)*9*9*pw[n-i-2])%mod;
		        d=(d+2*10*9*pw[n-i-1])%mod;
		        printf("%d ",d);
	        }
        }
};

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while(t--){
        Solution ob;
        ob.solve();
    }

    return 0;
}