/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

const int N = 1e3 + 5;

int n;
int a[N], b[N];

class Solution{
    public:
        void solve(){
            cin >> n;
		    bool sorted = 1, have0 = 0, have1 = 0;
		    for(int i = 1; i <= n; i++) {
		    	cin >> a[i];
		    	if(i >= 2 && a[i] < a[i - 1])
		    		sorted = 0;
		    }
		    for(int i = 1; i <= n; i++) {
		    	cin >> b[i];
		    	if(!b[i])have0 = 1;
		    	else have1 = 1;
		    }
		    if(have0 && have1)cout << "Yes" << endl;
		    else if(sorted)cout << "Yes" << endl;
		    else cout << "No" << endl;
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