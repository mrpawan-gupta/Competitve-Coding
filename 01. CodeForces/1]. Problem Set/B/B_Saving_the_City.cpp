/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void __solve(){
            int a,b,ans=0;
		    string s;
		    cin>>a>>b>>s;
		    for(int i=0;i<s.size();i++){
		    	if(s[i]=='1'){
		    		int y=a/b,z=0;
		    		while(i<s.size()&&(s[i]=='1'||y)){
		    			if(s[i]=='1'){
		    				z+=a/b-y;
		    				y=a/b;
		    				i++;
		    				continue;
		    			}
		    			y--;
		    			i++;
		    		}
		    		ans+=a+z*b;
		    	}
		    }
		    cout<<ans<<endl;
        }
};

int main(int argc, char const *argv[]){

    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin.failbit; cin.badbit;

    int __test = 1;
    cin >> __test;

    while(__test--){
        Solution __ob;
        __ob.__solve();
    }

    return 0;
}