#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	
	int t ; cin >> t;
	while(t--){
	    float base ; cin >> base ;
	    float sum = 0.0;
	    if(base < 1500){
	        float a =  (base/10);
	        float b =((base*90)/100);
	        sum = base + a+ b;
	    }
	    else {
	        float b = (base*98)/100; 
	        sum = base + (500)+ b;}
	        
	    cout<<fixed<<setprecision(2);
	    cout << sum <<endl ;
	}
	
	return 0;
}
