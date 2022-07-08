/*
     filename: H_Gambling.cpp
     @author: Pawan Gupta [ CodeForces - Mr.pawan_gupta Leetcode - mrpawan-gupta]
     createdAt: 2022-07-08 17:07:46
*/
#include <bits/stdc++.h>
using namespace std;

int t,n,i,j,k;

class Solution{
    public:
        void __solve(){
            map<int,vector<int> >mp;
		    cin>>n;
		    for(i=0;i<n;i++)
		    cin>>k,mp[k].push_back(i);
		    int maxx=-0x3f3f3f3f,l,r,x;
		    for(auto [i,v]:mp){
		    	int pos,k=-0x3f3f3f3f;
		    	for(j=0;j<v.size();j++){
		    		if(v[j]-2*j>k)
		    		k=v[j]-2*j,pos=v[j];
		    		int now=2*j-v[j]+k+1;
		    		if(now>maxx)
		    		maxx=now,l=pos,r=v[j],x=i;
		    	}
		    }
		    cout<<x<<" "<<l+1<<" "<<r+1<<"\n";

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