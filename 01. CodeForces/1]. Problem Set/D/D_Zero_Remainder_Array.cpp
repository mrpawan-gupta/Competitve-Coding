/*
     filename: D_Zero_Remainder_Array.cpp
     @author: Pawan Gupta [ CodeForces - Mr.pawan_gupta Leetcode - mrpawan-gupta]
     createdAt: 2022-07-12 14:31:00
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void __solve(){
            long long n ,k;
            cin >> n >> k;

            map<int, long long> cnt;
	        for (int i=0; i<n; i++) {
	        	int x;
	        	cin >> x;
	        	cnt[x%k]++;
	        }

	        long long ans = 0;
	        map<int, long long>::iterator it = cnt.begin();
	        while (it != cnt.end()) {
	        	long long i = it->first;
	        	long long count = it->second;
	        	if (i == 0 || k == 0) {
	        		it++;
	        		continue;
	        	}
	        	//cout << i << " " << k << endl;
	        	long long moves = (k-i) + (count-1) * k + 1;
	        	ans = max(ans, moves);
	        	it++;
	        }
	        cout << ans << endl;
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