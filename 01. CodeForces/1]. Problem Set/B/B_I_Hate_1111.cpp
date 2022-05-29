/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

#define rep(x,start,end) for(auto x=(start)-((start)>(end));x!=(end)-((start)>(end));((start)<(end)?x++:x--))

class Solution{
    public:
        void solve(){
          int n;
		      cin>>n;

		      rep(x,0,20){
		      	if (n%11==0){
		      		cout<<"YES"<<endl;
		      		return;
		      	}
		      	n-=111;
		      	if (n<0) break;
		      }
		      cout<<"NO"<<endl;
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