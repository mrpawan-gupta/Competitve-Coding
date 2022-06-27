// { Driver Code Starts
#include<iostream>
#include<string.h>
using namespace std;

class Solution {
public:
    bool check(int n){
        int t = n;
        int rev = 0;
        while(t>0){
            int x = t % 10;
            rev = rev*10+x;
            t/=10;
        }
        if(rev == n) return true;
        else return false;
    }
    int PalinArray(int a[], int n){
    	// code here
    	for(int i = 0 ; i < n ; ++i){
    	    if(!check(a[i])) return 0;
    	}
    	return 1;
    }
};

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
			cin>>a[i];
		Solution obj;
		cout<<obj.PalinArray(a,n)<<endl;
	}
} 