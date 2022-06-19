/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;
const int N = 21;

long long a[N];
class Solution{
    public:
        void solve(){
            int n;
	        cin >> n;
	        a[0] = 1;
	        for (int i = 1; i < N; ++i) {
	        	a[i] = a[i - 1] * i;
	        }

	        long long ans = a[n] / a[n / 2] / a[n / 2];
	        ans = ans * a[n / 2 - 1];
	        ans = ans * a[n / 2 - 1];
	        ans /= 2;

	        cout << ans << endl;
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