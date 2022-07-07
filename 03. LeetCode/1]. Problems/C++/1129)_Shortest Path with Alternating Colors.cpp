class Solution {
public:
    vector<int> shortestAlternatingPaths(int n, vector<vector<int>>& red_edges, vector<vector<int>>& blue_edges) {
        vector<vector<int> > red(n,vector<int>());
        vector<vector<int> > blue(n,vector<int>());
        for(auto x:red_edges)
            red[x[0]].push_back(x[1]);
        
        for(auto x:blue_edges)
            blue[x[0]].push_back(x[1]);
        
        vector<vector<int>> ans(2,vector<int>(n,INT_MAX)); 
        //ans[0][0]=0,ans[0][1]=0;
        queue<vector<int>> queue; //{blue distance -0 ,red distance -1 }
        queue.push({0,0});
        queue.push({0,1});
        int d=0;
        while(!queue.empty()){
            int qsize=queue.size();
            while(qsize--){
                vector<int> vec=queue.front();
                queue.pop();
                int v=vec[0];
                if(vec[1]==0){ // blue 
                    if(ans[0][v]==INT_MAX)
                        ans[0][v]=d;
                    for(auto x : red[v]){
                        if(ans[1][x]==INT_MAX)
                            queue.push({x,1});
                    }
                }
                else{//red
                    if(ans[1][v]==INT_MAX)
                        ans[1][v]=d;
                    for(auto x : blue[v]){
                        if(ans[0][x]==INT_MAX)
                            queue.push({x,0});
                    }
                }
            }
            d++;
        }
        for(int i=0;i<n;i++){
            ans[0][i]=min(ans[0][i],ans[1][i]);
            if(ans[0][i]==INT_MAX)
                ans[0][i]=-1;
        }
        return ans[0];
    }
};