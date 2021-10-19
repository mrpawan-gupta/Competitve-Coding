

#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    if(u!=v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
}
void dfs(int node,vector<int>*adj,bool *visited,int *value,int &c,int *dj){
    int n=adj[node].size();
    visited[node]=true;
    value[node]=c++;
    for(auto x:adj[node]){
        if(!visited[x])
            dfs(x,adj,visited,value,c,dj);
        else if(value[x]<value[node]){
            dj[node]++;
        }
    }
    return;
}

bool great(pair<int,int>a,pair<int,int>b){
    if(a.first==b.first)return true;
    return a.first>b.first;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);     
   
    int t;cin>>t;
    while(t--){
        int n,m;cin>>n>>m;
        vector<int>adj[n];
        for(int i=0;i<m;i++){
            int x,y;
            cin>>x>>y;
            addEdge(adj,--x,--y);
        }
        pair<int,int> p[n];
        for(int i=0;i<n;i++){
           p[i]={adj[i].size(),i};
        }
        sort(p,p+n,great);
        int c=1;
        bool visited[n];int value[n];
        int dj[n];
        for(int i=0;i<n;i++)
        {
            visited[i]=false;
            value[i]  = -1;
            dj[i]=0;
        }
       
        for(auto mp:p){
            if(!visited[mp.second])
                dfs(mp.second,adj,visited,value,c,dj);
        }
        // for(int i=0;i<n;i++){
        //     for(auto x:adj[i]){
        //         if(value[x]<value[i])dj[i]++;
        //     }
        // }
        sort(dj,dj+n);
        cout<<dj[n-1]<<endl;
        for(int i=0;i<n;i++)cout<<value[i]<<" ";cout<<endl;
    }
    return 0;
}