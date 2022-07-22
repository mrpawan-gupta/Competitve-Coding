//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int numProvinces(vector<vector<int>> adj, int V) {
        int province=0;
        for(int i=0;i<V;i++){
            if(adj[i][i] == 1){
                queue<int> q;
                q.push(i);
                while(!q.empty()){
                    int v = q.front();
                    q.pop();
                    adj[v][v] = -1;
                    for(int j = 0; j < V ; j++){
                        if(adj[v][j] == 1 && adj[j][j] != -1){
                            q.push(j);
                        }
                    }
                }
                province++;
            }
        }
        return province;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends