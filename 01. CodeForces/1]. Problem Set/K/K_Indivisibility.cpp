/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
	if (a < b) {
		swap(a, b);
	}
	if (b == 0) {
		return a;
	}
	return gcd(b, a % b);
}
 
int lcm(int a, int b) {
	return a / gcd(a, b) * b;
}


class Solution{
    public:
        void solve(){
            long long n; cin >> n;
            n = n - n/2 - n/3 - n/5 - n/7 + n/6 + n/10 + n/14 + n/15 + n/21 + n/35 - n/30 - n/42 - n/70 - n/105 + n/210;
            cout << n << '\n';
        }
};

int main(int argc, char const *argv[]){

    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin.failbit; cin.badbit;

    int t = 1;
    //cin >> t;

    while(t--){
        Solution ob;
        ob.solve();
    }

    return 0;
}
