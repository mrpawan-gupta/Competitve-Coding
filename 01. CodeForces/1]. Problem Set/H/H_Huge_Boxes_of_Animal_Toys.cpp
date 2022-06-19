/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solve(){
            int A, B, C, D;
            cin>>A>>B>>C>>D;
		    if(A==0 && D == 0){
		    	if(B % 2 == 1){
		    		cout<<"Tidak Ya Tidak Tidak\n";
		    	} else {
		    		cout<<"Tidak Tidak Ya Tidak\n";
		    	}
		    } else if(B == 0 && C == 0){
		    	if(A % 2 == 1){
		    		cout<<"Ya Tidak Tidak Tidak\n";
		    	} else {
		    		cout<<"Tidak Tidak Tidak Ya\n";
		    	}
		    } else {
		    	if((A+B) % 2 == 1){
		    		cout<<"Ya Ya Tidak Tidak\n";
		    	} else{
		    		cout<<"Tidak Tidak Ya Ya\n";
		    	}
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