//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++


class Solution{
   public:
       int maxLevel(int h,int m)
       {
           int ans = 0;
           bool r1 = true;
           while(h>0 and m>0) {
               if (r1) {
                   h+=3; m+=2; r1=false;
                   ans++;
               } else {
                   r1 = true;
                   if (h>5) {
                       if (m>10) {
                           h-=5; m-=10;
                           ans++;
                       } else if (h>20) {
                           h-=20; m+=5;
                           ans++;
                       } else {
                           break;
                       }
                   } else {
                       break;
                   }
               }
           }
           return ans;
       }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    Solution a;
    while(t--)
    {
        int h,m;
        cin>>h>>m;
        cout<<a.maxLevel(h,m)<<endl;
    }
    return 0;
}
// } Driver Code Ends