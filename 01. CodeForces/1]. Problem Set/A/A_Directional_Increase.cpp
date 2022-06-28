/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void __solve(){
            int n;
	        cin >> n;
	        vector<int> a(n);
	       
            for(int i=0;i<n;i++){
                 cin>>a[i];
            }
	        long long s = accumulate(a.begin(), a.end(), 0LL);
	        if (s != 0){
	        	cout << "No\n";
	        	return;
	        }


	        vector<long long> p(n + 1);
	        bool decr = false;
	        for(int i = 1; i <= n; ++i){
	        	p[i] = p[i - 1] + a[i - 1];
	        	if (p[i] == 0){
	        		decr = true;
	        	}
	        	if (p[i] > 0 && decr){
	        		cout << "No\n";
	        		return;
	        	}
	        	if (p[i] < 0){
	        		cout << "No\n";
	        		return;
	        	}
	        }
	        cout << "Yes\n";
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