class Solution {
public:
    int minimumJumps(vector<int>& forbidden, int a, int b, int x) {
        queue<pair<int,bool>> Queue;
        set<int> iset;
        int limit=2000+a+b;
        for(auto n:forbidden)
            iset.insert(n);
        iset.insert(0);
        Queue.push({0,0});
        int count=0;
        while(!Queue.empty()){
            int sz=Queue.size();
            
            while(sz--){
                pair<int,bool> p=Queue.front();
                if(p.first==x)
                    return count;
                Queue.pop();
                int r=p.first+a;
                int l=p.first-b;
                
                if(r<=limit and !iset.count(r)) {
                  Queue.push({r,0});
                  iset.insert(r);
                }
                    
                if(l<=limit and l>=0 and !p.second and !iset.count(l))
                    Queue.push({l,1});
                    
            }
            count++;
        }
        
        return -1;
    }
};