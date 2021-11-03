#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<long>;
using vvl = vector<vl>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
const ll mod = 1e9 + 7, inf = 1e18;
#define pb push_back
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;

    int t;
	cin >> t;
	while (t--) {
	    string s;
	    cin >> s;
	    int n = s.size(), ones = 0, zeros = 0;
	    for (char c: s) {
	        if (c == '1')
	            ones++;
	        else
	            zeros++;
	    }
	    if (zeros == 0 && ones%2 == 0) {
	        cout << "NO" << '\n';
	        continue;
	    }
	    cout << "YES\n";
	    int start = ones%2 + 1, first = start;
	    vector<int> res;
	    if (start == 1 && s.substr(0,3) == "111") { // special handling
	        int i = s.find('0');
	        if (i%2) {
	            res.push_back(i-1);
	            res.push_back(i);
	            s[i-1] = '0';
	            s[i+1] ^= 1;;
	        }
	        for (; i>=0; i--) {
	            int c = s[i];
    	        if (c == '0') continue;
    	        if (start == 2) {
    	            res.push_back(i);
    	            s[i] = '0';
    	            start = 1;
    	        }
    	        else {
    	            if (i > 1 && s.substr(i-2,3) != "111") {
    	                res.push_back(i-2);
    	                for (int j=0; j<3; j++) {
    	                    char x = s[i+j-2];
    	                    s[i+j-2] = x == '1'? '0': '1';
    	                }
    	            }
    	            else {
    	                i++;
    	                res.push_back(i-2);
    	                for (int j=0; j<3; j++) {
    	                    char x = s[i+j-2];
    	                    s[i+j-2] = x == '1'? '0': '1';
    	                }
    	                i++;
    	            }
    	            start = 2;
    	        }
	        }
	    }
	    for (int i=0; i<n; i++) {
	        int c = s[i];
	        if (c == '0') continue;
	        if (start == 2) {
	            res.push_back(i);
	            s[i] = '0';
	            start = 1;
	        }
	        else {
	            if (i < n-2 && s.substr(i,3) != "111") {
	                res.push_back(i);
	                for (int j=0; j<3; j++) {
	                    char x = s[i+j];
	                    s[i+j] = x == '1'? '0': '1';
	                }
	            }
	            else {
	                i--;
	                res.push_back(i);
	                for (int j=0; j<3; j++) {
	                    char x = s[i+j];
	                    s[i+j] = x == '1'? '0': '1';
	                }
	                i--;
	            }
	            start = 2;
	        }
	    }
	    int len = res.size();
	    cout << len << '\n';
	    if (len) {
    	    cout << first << '\n';
    	    for (int r: res)
    	        cout << r << '\n';
	    }
	}

    return 0;
}
