//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;

stack<int> _push(int arr[],int n);

void _getMinAtPop(stack<int>s);

// } Driver Code Ends
//User function Template for C++


//Function to push all the elements into the stack.
int minimum=INT_MAX;
stack<int> _push(int arr[],int n)
{
  stack<int>st;
  minimum=INT_MAX;
  st.push(minimum);
  for(int i=0;i<n;i++){
     if(arr[i]<=minimum) {st.push(minimum);  minimum=arr[i]; }
     st.push(arr[i]);
  }
  return st;
}

//Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int>st){
    while(st.size()>1){
        cout<<minimum<<" ";
        if(st.top()==minimum){
            st.pop();
            minimum=st.top();
        }
        st.pop();
    }
}

//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    stack<int>mys=_push(arr,n);
	    _getMinAtPop(mys);
	    
	    cout<<endl;
	    
	}
	return 0;
}


// } Driver Code Ends