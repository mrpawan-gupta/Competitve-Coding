// { Driver Code Starts
#include <iostream>
using namespace std;

class Solution{
    public:
    int getSum(int a[], int n) {
        // Your code goes here
        int sum = a[0];
        for(int i = 1; i < n; ++i){
            sum+=a[i];
        }
        return sum;
    }   
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution ob;
        cout << ob.getSum(a, n) << endl;
    }

    return 0;
}  // } Driver Code Ends