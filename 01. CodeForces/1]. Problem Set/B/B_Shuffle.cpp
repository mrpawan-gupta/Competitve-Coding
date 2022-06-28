/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void __solve(){
            int n, x, m;
	        cin >> n >> x >> m;
	        x--;
	        int l = x;
	        int r = x;
	        for(int i = 0; i < m; i++){
	        	int a, b;
	        	cin >> a >> b;
	        	a--; b--;
	        	if(b < l || r < a) continue;
	        	l = min(l, a);
	        	r = max(r, b);
	        }
	        cout << r - l + 1 << '\n';
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