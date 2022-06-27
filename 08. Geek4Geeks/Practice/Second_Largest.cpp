// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
	    int max = arr[0];
	    int sec_max = -1;
	    for(int i = 1 ; i < n ; i++){
	        if(arr[i]>max){
	            sec_max = max;
	            max = arr[i];
	            
	        }
	        else if(arr[i] > sec_max and max >arr[i]){
	            sec_max = arr[i];
	        }
	    }
	    return sec_max;
	}
};

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}
  // } Driver Code Ends