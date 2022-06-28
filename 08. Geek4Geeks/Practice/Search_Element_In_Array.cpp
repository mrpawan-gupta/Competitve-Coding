// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    // Function to search x in arr
    // arr: input array
    // X: element to be searched for
    int search(int arr[], int N, int X)
    {
        
        // Your code here
        int ans  = -1;
        for(int i = 0; i < N; ++i){
            if(arr[i]==X){
                ans = i;
                break;
            }
        }
        return ans;
        // sort(arr, arr+N);
        // int ans = -1;
        // int i = 0;
        // int j = N-1;
        // int mid = (i+j)/2;
        // while(i<j){
        //     if(arr[mid]==X){
        //         ans = mid;
        //         break;
        //     }
        //     if(arr[mid]>X){
        //         j = mid-1;
        //     }
        //     if(arr[mid]<X){
        //         i = mid+1;
        //     }
        //     mid = (i+j)/2;
        // }
        // return ans;
    }

};

// { Driver Code Starts.

int main()
{
    int testcases;
    cin>>testcases;
    while(testcases--)
    {
        int sizeOfArray;
        cin>>sizeOfArray;
        int arr[sizeOfArray];
        int x;
        
        for(int i=0;i<sizeOfArray;i++)
        {
            cin>>arr[i];
        }
        cin>>x;
        Solution ob;
        cout<<ob.search(arr,sizeOfArray,x)<<endl; //Linear search
    }

    return 0;
    
}
  // } Driver Code Ends