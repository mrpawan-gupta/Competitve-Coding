/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

const int maxn = 2e5 + 100;
int q, n, a[maxn], b[maxn];

bool check(int x){
	int c = 0;
	for(int i = 0; i < n; i++){
		if(x - 1 - a[i] <= c && c <= b[i]) c++;
	}
	return c >= x;
}

class Solution{
    public:
        void solve(){
          cin >> n;
          for(int i = 0; i < n; i++){
            	cin >> a[i] >> b[i];
    	    }
    	    int l = -1, r = n + 1, mid;
    	    while(r - l > 1){
    	    	mid = (l + r) >> 1;
    	    	if(check(mid)) l = mid;
    	    	else r = mid;
    	    }
    	    cout << l << "\n";
        }
};

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--){
        Solution ob;
        ob.solve();
    }

    return 0;
}