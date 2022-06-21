/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

const int MAXN=1e5+5;
char a[12],b[12];
int m;
double dp[32],dp2[32];
class Solution{
    public:
        void solve(){
            scanf("%s",a+1);
	        scanf("%s",b+1);
	        int n,i,j,k,ans=0;
	        m=strlen(a+1);
	        for(i=1;i<=m;i++){
	        	if(a[i]=='+') ans++;
	        	else ans--;
	        }
	        dp[15]=1.0000;
	        ans+=15;
	        for(i=1;i<=m;i++){
	        	memset(dp2,0,sizeof(dp2));
	        	if(b[i]=='+'){
	        		for(j=1;j<=30;j++){
	        			dp2[j]=dp[j-1];
	        		}
	        		memset(dp,0,sizeof(dp));
	        		for(j=0;j<=30;j++) dp[j]=dp2[j];
	        	}
	        	if(b[i]=='-'){
	        		for(j=1;j<=30;j++){
	        			dp2[j]=dp[j+1];
	        		}
	        		memset(dp,0,sizeof(dp));
	        		for(j=0;j<=30;j++) dp[j]=dp2[j];
	        	}
	        	if(b[i]=='?'){
	        		for(j=1;j<=30;j++){
	        			if(dp2[j]+=(dp[j+1]+dp[j-1])/2);
	        		}
	        		memset(dp,0,sizeof(dp));
	        		for(j=0;j<=30;j++) dp[j]=dp2[j];
	        	}
	        }
	        printf("%.9f\n",dp[ans]);
        }
};

int main(int argc, char const *argv[]){

    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin.failbit; cin.badbit;

    int t = 1;
    //cin >> t;

    while(t--){
        Solution ob;
        ob.solve();
    }

    return 0;
}