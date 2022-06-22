/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solve(){
            int n;
		    cin >> n;
		    set<int> used;
		    for (int i = 2; i * i <= n; ++i) {
		    	if (n % i == 0 && !used.count(i)) {
		    		used.insert(i);
		    		n /= i;
		    		break;
		    	}
		    }
		    for (int i = 2; i * i <= n; ++i) {
		    	if (n % i == 0 && !used.count(i)) {
		    		used.insert(i);
		    		n /= i;
		    		break;
		    	}
		    }
		    if (int(used.size()) < 2 || used.count(n) || n == 1) {
		    	cout << "NO" << '\n';
		    } else {
		    	cout << "YES" << '\n';
		    	used.insert(n);
		    	for (auto it : used) cout << it << " ";
		    	cout << '\n';
		    }
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