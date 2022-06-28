#include <bits/stdc++.h>

using namespace std;

class Solution{
public:
	int findMaximum(int arr[], int n) {
	    // code here
	    int low = 0;
	    int high = n-1;
	    
	    while(low < high) {
	        int mid = (low+high) / 2;
	        if(arr[mid] < arr[mid+1]) {
	            low = mid +1;
	        } else {
	            high = mid;
	        }
	        
	    }
	    return arr[low];
	}
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.findMaximum(arr, n);
        cout << ans << "\n";
    }
    return 0;
}