/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void __solve(){
            int N;
		cin >> N;
		vector<int> P(N, 0);
		for(int i = 1; i < N; i++) {
			cin >> P[i];
			--P[i];
		}
		vector<long long> L(N), R(N);
		for(int i = 0; i < N; i++) cin >> L[i] >> R[i];
		vector<long long> A(N, 0);
		int ans = 0;
		for(int i = N-1; i >= 0; i--) {
			if(A[i] > R[i]) A[i] = R[i];
			else if(A[i] < L[i]) {
				ans++;
				A[i] = R[i];
			}
			if(i) A[P[i]] += A[i];
		}
		cout << ans << "\n";
        }
};

int main(int argc, char const *argv[]){

    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin.failbit; cin.badbit;

    int __test = 1;
    cin >> __test;

    while(__test--){
        Solution __ob;
        __ob.__solve();
    }

    return 0;
}