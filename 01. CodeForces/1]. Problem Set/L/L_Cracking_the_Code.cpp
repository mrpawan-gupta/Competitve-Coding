/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - 100000r.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

using ll = long long;
 

ll a[10];

class Solution{
    public:
        void solve(){
            ll n;
	        cin >> n;
	        a[1] = n / 10000, a[2] = n / 1000 % 10, a[3] = n / 100 % 10, a[4] = n / 10 % 10, a[5] = n % 10;
	        ll temp = a[1];
	        temp = temp * 10 + a[3];
	        temp = temp * 10 + a[5];
	        temp = temp * 10 + a[4];
	        temp = temp * 10 + a[2];
	        ll count = temp;
	        count = count * count;
	        count %= 100000;
	        count *= count;
	        count %= 100000;
	        count *= temp;
	        count %= 100000;
	        if (count < 10) cout << 0;
	        if (count < 100) cout << 0;
	        if (count < 1000) cout << 0;
	        if (count < 10000) cout << 0;
	        cout << count << endl;
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