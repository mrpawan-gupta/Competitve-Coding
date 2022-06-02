/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

int DP[1002][1002];

class Solution{
    public:
        void solve(){
          int m,n,k;
          cin >> n >> m >>k;
	        for(int i=0;i<n;i++){
	        	for(int j=0;j<m;j++){
	        		cin >> DP[i][j];
	        	}
	        }
          int b,a;
	        while(k-->0){
	        	cin >> b;
            a=0;
            b-=1;
	        	while(a<n){
	        		if(DP[a][b]==2) a+=1;
	        		else{
	        			if(DP[a][b]==1){
	        				b+=1;
	        				DP[a][b-1]=2;
	        			}
	        			else{
	        				b-=1;
	        				DP[a][b+1]=2;
	        			}
	        		}
	        	}
	        	cout <<b+1 << ' ';
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