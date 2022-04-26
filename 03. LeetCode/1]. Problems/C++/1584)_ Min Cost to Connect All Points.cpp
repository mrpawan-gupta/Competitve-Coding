class Solution {
public:
    using Cost_Index = pair<int,int>; using Point = vector<int>;
    inline int d(const Point &p1, const Point &p2){return abs(p1[0] - p2[0]) + abs(p1[1] - p2[1]);}
    
    int minCostConnectPoints(vector<vector<int>>& points) {
        int ans = 0;
        unordered_set<int> unvisited; unvisited.reserve(points.size()); 
        for(int i = 0; i < points.size(); i++) unvisited.insert(i);
        priority_queue<Cost_Index, vector<Cost_Index>, greater<Cost_Index>> pq;   
        pq.push({0,0});
        vector<int> dis(points.size(), INT_MAX); 
        
        while(not pq.empty()){
            auto cur = pq.top(); pq.pop();
            if(unvisited.find(cur.second) == unvisited.end()) continue;
            unvisited.erase(cur.second);
            ans += cur.first;
            for(const int nxt: unvisited){
                int tmp = d(points[cur.second],points[nxt]);
                if( tmp  <  dis[nxt] ) {
                    dis[nxt] = tmp;
                    pq.push({tmp, nxt});
                }
            }
        }
        return ans;
    }
};