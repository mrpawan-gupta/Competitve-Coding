/*
     filename: B_Number_of_Triplets.cpp
     @author: Pawan Gupta [ CodeForces - Mr.pawan_gupta Leetcode - mrpawan-gupta]
     createdAt: 2022-06-30 20:09:25
*/
#include <bits/stdc++.h>
using namespace std;

int n,x[3001],y[3001],ans;
bool point[2001][2001];

class Solution{
    public:
        void __solve(){
            cin>>n;
	        for(int i=0;i<n;i++)
	        {
	        	cin>>x[i]>>y[i];
	        	x[i]+=1000;
	        	y[i]+=1000;
	        	point[x[i]][y[i]]=1;
	        }
	        for(int i=0;i<n-1;i++)
	        	for(int j=i+1;j<n;j++)
	        		if((x[i]+x[j])%2==0&&(y[i]+y[j])%2==0)
	        			ans+=point[(x[i]+x[j])/2][(y[i]+y[j])/2];
	        cout<<ans;
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