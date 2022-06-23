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
		    vector<int> a(n);
		    for (auto &it : a) cin >> it;
		    int l = 0, r = n - 1;
		    int left_sum = 0, right_sum = 0;
		    int count = 0, left = 0, right = 0;
		    while (l <= r) {
		    	if (!(count&1)) {
		    		int sum = 0;
		    		while (l <= r && sum <= right_sum) {
		    			sum += a[l++];
		    		}
		    		left += sum;
		    		left_sum = sum;
		    	} else {
		    		int sum = 0;
		    		while (l <= r && sum <= left_sum) {
		    			sum += a[r--];
		    		}
		    		right += sum;
		    		right_sum = sum;
		    	}
		    	++count;
		    }
		    cout << count << " " << left << " " << right << endl;
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