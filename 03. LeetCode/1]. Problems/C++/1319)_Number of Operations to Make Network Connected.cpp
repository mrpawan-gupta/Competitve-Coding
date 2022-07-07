class Solution {
public:
    vector<int> parent;
    vector<int> rank;
    //find operation by path compression
    int findp(int i){
        if(parent[i]!=i) parent[i]=findp(parent[i]);
        return parent[i];
    }
    //union operation by rank
    void makeUnion(int i,int j){
        if(rank[findp(i)]>rank[findp(j)]) parent[findp(j)]=findp(i);
        else if(rank[findp(i)]<rank[findp(j)]) parent[findp(i)]=findp(j);
        else {
           parent[findp(i)]=findp(j);
            rank[findp(j)]++;
        }

    }
  
    int makeConnected(int n, vector<vector<int>>& connections) {
        parent.resize(n);
        rank.resize(n,0);
        int notConn = 0,conn = 0;
        for(int i=0;i<n;i++) parent[i]=i;
        for(int i=0;i<connections.size();i++){
            if(findp(connections[i][0])==findp(connections[i][1])) notConn ++; //redundant connections
            else makeUnion(connections[i][0],connections[i][1]);
        }
        for(int i=0;i<parent.size();i++){
            if(parent[i]==i) conn++; //number of connected components
        }
        if(notConn >= conn-1) return conn-1;
        return -1;
    }
};