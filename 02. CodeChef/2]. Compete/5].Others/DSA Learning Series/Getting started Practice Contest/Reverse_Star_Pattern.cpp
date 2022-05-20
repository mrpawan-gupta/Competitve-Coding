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
          for(int i=0;i<n;i++){
	          for(int j=n;j>i+1;j--){
		            cout<<" ";
	          }
	          for(int j=0;j<=i;j++){
		            cout<<"*";
	          }
	          cout<<endl;
          }
        }
};

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while(t--){
        Solution ob;
        ob.solve();
    }

    return 0;
}