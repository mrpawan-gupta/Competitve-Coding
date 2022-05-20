/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solve(){
          int a,b,c;
	        cin>>a>>b>>c;
	        if((a+b>c)&&(b+c>a)&&(c+a>b)){
	          if(a==b&&b==c&&c==a) cout<<"1"<<endl;
	          else if(a==b||b==c||c==a) cout<<"2"<<endl;
	          else  cout<<"3"<<endl;
	        }
	        else{
	            cout<<"-1"<<endl;
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