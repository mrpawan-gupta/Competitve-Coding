struct Node{
    int elementID;
    int cnt;
};
class Solution{
public:
    int totalSteps(vector<int> &nums){
        stack<Node> s;
        s.push({0, -1});
        int cntStep = -1;
        for (int i = 1; i < nums.size(); i++){
            int cnt = 1;
            while (!s.empty()){
                if (nums[s.top().elementID] <= nums[i]){
                    cnt = max(cnt,  s.top().cnt + 1);
                    s.pop();
                }
                else{
                    break;
                }
            }
            if (s.empty()){
                cnt = -1;
            }
            cntStep = max(cntStep, cnt);
            s.push({i, cnt});
        }
        return (cntStep < 0 ? 0 : cntStep);
    }
};