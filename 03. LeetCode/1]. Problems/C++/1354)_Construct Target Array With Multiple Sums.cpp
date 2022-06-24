class Solution {
public:
    bool isPossible(vector<int>& target) {
        priority_queue <int> PQ;
        long sum = 0,temp;
        for(int i=0;i<target.size();++i){
            sum += target[i];
            if(target[i]!=1) PQ.push(target[i]);
        }
        while(!PQ.empty()&&PQ.top()!=1){
            temp = PQ.top();
            PQ.pop();
            sum -= temp;
            if(sum == 0 || temp <= sum)return 0;
            temp %= sum;
            sum += temp;
            if(temp == 1)continue;
            PQ.push(temp ? temp : sum);
        }
        return 1;
    }
};