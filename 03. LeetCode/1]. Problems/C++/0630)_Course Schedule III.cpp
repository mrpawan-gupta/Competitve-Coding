class Solution {
public:
    int scheduleCourse(vector<vector<int>>& c) {
        int n = c.size();
        auto cmp = [&]( const vector<int> &a, const vector<int> &b){
            return a[1]<b[1];
        };
        sort(c.begin(),c.end(),cmp);
        priority_queue<vector<int>> pq;
        int count = 0;
        int ans = 0;
        for(auto &idx:c) {
            int currValue = idx[0];
            int last = idx[1];
            if(count + currValue <= last){
                ans++;
                count += currValue;
                pq.push(idx);
            }
            else if(!pq.empty() && pq.top()[0] > currValue && count-pq.top()[0]+currValue <= last){
                count = count-pq.top()[0]+currValue;
                pq.pop();
                pq.push(idx);
            }
        }
        return ans;
    }
};