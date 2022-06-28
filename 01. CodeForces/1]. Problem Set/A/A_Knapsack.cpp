/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;


using ll = long long;

class Solution{
    public:
        void __solve(){
            int n;
	        ll W;
	        cin >> n >> W;
	        vector<ll> w(n);
	        for(ll& x : w) cin >> x;
	        for(int i = 0; i < n; i++){
	        	if(w[i] <= W && w[i] * 2 >= W){
	        		cout << 1 << '\n';
	        		cout << (i+1) << '\n';
	        		return;
	        	}
	        }
	        ll tw = 0;
	        vector<int> used;
	        for(int a = 0; a < n; a++){
	        	if(tw + w[a] <= W){
	        		tw += w[a];
	        		used.push_back(a);
	        	}
	        }
	        if(tw * 2 >= W){
	        	cout << used.size() << '\n';
	        	for(int r : used){
	        		cout << r+1 << ' ';
	        	}
	        	cout << '\n';
	        } else {
	        	cout << -1 << '\n';
	        }
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