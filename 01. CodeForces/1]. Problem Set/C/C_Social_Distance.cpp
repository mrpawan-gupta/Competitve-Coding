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
		    string s;
		    cin >> s;
    
		    int res = 0;
    
		    for (int i = 0; i < n;) {
		    	int j = i + 1;
    
		    	for (; j < n && s[j] != '1'; j++);
    
		    	int left = s[i] == '1' ? k : 0;
		    	int right = j < n && s[j] == '1' ? k : 0;
		    	int len = j - i;
    
		    	if (left == k) {
		    		len--;
		    	}
    
		    	len -= left + right;
    
		    	if (len > 0) {
		    		res += (len + k) / (k + 1);
		    	}
    
		    	i = j;
		    }
    
		    cout << res << endl;
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