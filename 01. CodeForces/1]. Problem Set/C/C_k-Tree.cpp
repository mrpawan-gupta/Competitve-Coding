/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solve(){
            int N,K,D;
	        cin >> N >> K >> D;
	        long long mod =1000000007;
	        vector< vector<long long> > A[2];
	        for(int i =0; i < 2; i++) A[i].resize(N+47,vector<long long>(N+47,0));
	        A[0][0][N] =1;
	        for(int i =0; i < N; i++) for(int j =0; j <= N; j++) for(int k =1; k <= min(K,j); k++) {
	        	A[0][i][j] %=mod;
	        	A[1][i][j] %=mod;
	        	if(k >= D) A[1][i+1][j-k] +=A[0][i][j];
	        	else A[0][i+1][j-k] +=A[0][i][j];
	        	A[1][i+1][j-k] +=A[1][i][j];}

	        long long ans =0;
	        for(int i =0; i <= N; i++) ans +=A[1][i][0];
	        ans %=mod;
	        if(ans < 0) ans +=mod;
	        cout << ans << "\n";
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