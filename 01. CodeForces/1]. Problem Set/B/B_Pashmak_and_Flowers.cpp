/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solve(){
            int N;
	        cin >> N;
	        vector<int> A(N);
	        for(int i =0; i < N; i++) cin >> A[i];
	        sort(A.begin(),A.end());
	        cout << A[N-1]-A[0] << " ";
	        if(A[N-1] == A[0]) {
	        	cout << 1LL*N*(N-1)/2 << "\n";
	        	return ;
            }
	        int a =0, b =0;
	        for(int i =0; i < N; i++) if(A[i] == A[0]) a++;
	        for(int i =0; i < N; i++) if(A[i] == A[N-1]) b++;
	        cout << 1LL*a*b << "\n";
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