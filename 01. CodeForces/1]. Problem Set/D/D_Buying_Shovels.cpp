/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solve(){
            int n, k;
		    cin >> n >> k;

		    int ans = 1e9+5;

		    for (int j = 1; j * j <= n; j++) {
		    	if (n % j == 0) {
		    		if (j <= k) {
		    			ans = min(ans, n / j);
		    		}

		    		if (n / j <= k) {
		    			ans = min(ans, j);
		    		}
		    	}
		    }

		    cout << ans << endl;
        }
};

int main(int argc, char const *argv[]){

    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin.failbit; cin.badbit;

    int t = 1;
    cin >> t;

    while(t--){
        Solution ob;
        ob.solve();
    }

    return 0;
}