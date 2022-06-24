#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        int start=0;
        int end=n-1;
      
        while(end>=start){
            int mid=(start+end)/2;
            if(k==arr[mid]){
               return mid;
            }
            else if(arr[mid]>k){
               end=mid-1;
               
            }
            else{
               start=mid+1;
            }
        }
        return -1;
    }
};
int main() {
    int t;
    cin >> t;

    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];
        int key;
        cin >> key;
        Solution ob;
        int found = ob.binarysearch(arr, N, key);
        cout << found << endl;
    }
}