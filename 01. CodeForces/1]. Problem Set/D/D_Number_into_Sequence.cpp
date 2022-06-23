/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solve(){
            long long n;
		    cin >> n;
    
		    vector<pair<int, long long>> value;
		    for (long long i = 2; i * i <= n; ++i) {
		    	int cnt = 0;
		    	while (n % i == 0) {
		    		++cnt;
		    		n /= i;
		    	}
		    	if (cnt >= 1) {
		    		value.push_back({cnt, i});
		    	}
		    }
		    if (n > 0) {
		    	value.push_back({1, n});
		    }
    
		    sort(value.rbegin(), value.rend());
		    vector<long long> ans(value[0].first, value[0].second);
		    for (int i = 1; i < int(value.size()); ++i) {
		    	for (int j = 0; j < value[i].first; ++j) {
		    		ans.back() *= value[i].second;
		    	}
		    }
    
		    cout << ans.size() << '\n';
		    for (auto it : ans) {
                cout << it << " ";
            }
		    cout << '\n';
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