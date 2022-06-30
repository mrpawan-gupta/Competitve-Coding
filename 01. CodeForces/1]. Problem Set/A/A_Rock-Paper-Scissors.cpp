/*
     filename: A_Rock-Paper-Scissors.cpp
     @author: Pawan Gupta [ CodeForces - Mr.pawan_gupta Leetcode - mrpawan-gupta]
     createdAt: 2022-06-30 20:03:31
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void __solve(){
            int n;
	        cin>>n;
	        string a,b;
	        cin>>a>>b;
	        int m=a.size(),k=b.size();
	        int as=0,bs=0;
            auto calculate = [](char c,char d){
            	if(c=='R'&&d=='S'||c=='S'&&d=='P'||c=='P'&&d=='R')
            	   return true;
            	return false;
            };
	        for(int i=0;i<m*k&&i<n;i++){
	        	int tims=1+(n-i-1)/(m*k);
	        	if(calculate(a[i%a.size()],b[i%b.size()]))
	        	   bs+=tims;
	        	if(calculate(b[i%b.size()],a[i%a.size()]))
	        	   as+=tims;
	        }
	        cout<<as<<' '<<bs<<endl;
        }
};

int main(int argc, char const *argv[]){

    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin.failbit; cin.badbit;

    int __test = 1;
    //cin >> __test;

    while(__test--){
        Solution __ob;
        __ob.__solve();
    }

    return 0;
}