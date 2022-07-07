class Solution {
public:
    void makeGraph(vector<vector<int>>& connections,vector<int> adj[]){
        for(int i=0; i<connections.size(); i++){
            adj[connections[i][0]].push_back(connections[i][1]);
            adj[connections[i][1]].push_back(-connections[i][0]);
        }
    }
    void DFS(vector<int> adj[],vector<bool>& visited,int src,int &ans){
        visited[src] = true;
        for(int &v : adj[src]){
            if(!visited[abs(v)]){
                if(v > 0)
                    ans++;
                DFS(adj,visited,abs(v),ans);
            }
        }
    }
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<int> adj[n];
        vector<bool> visited(n,false);
        int ans = 0;
        makeGraph(connections,adj);
        
        DFS(adj,visited,0,ans);
        return ans;
    }
};