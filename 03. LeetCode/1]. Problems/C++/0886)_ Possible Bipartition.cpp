class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        vector<int> color(n+1, -1);
        vector<int> graph[n+1];
        for(auto edge : dislikes){
            graph[edge[0]].push_back(edge[1]);
            graph[edge[1]].push_back(edge[0]);
        }
        
        for(int i=1; i<=n; i++){
            if(color[i] == -1)
                if(!DFS(graph, i, color)) return false;
        }
        return true;
    }
    
    bool DFS(vector<int> graph[], int vertex, vector<int>& color){
        if(color[vertex] == -1) color[vertex] = 1;
        
        for(auto it : graph[vertex]){
            if(color[it] == -1){
                color[it] = 1 - color[vertex];
                if(!DFS(graph, it, color)) return false;
            }
            else if(color[it] == color[vertex]) return false;
        }
        return true;
    }
};