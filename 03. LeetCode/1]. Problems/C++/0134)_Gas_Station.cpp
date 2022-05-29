class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int curTank = 0;
        int startingPoint = 0;
        for(int i = 0; i < gas.size(); i++) {
            curTank += gas[i] - cost[i];
            if(curTank < 0) {
                startingPoint = i+1;
                curTank = 0;
            }
        }
        for(int i = 0; i < startingPoint; i++) {
            curTank += gas[i] - cost[i];
            if(curTank < 0) return -1;
        }
        return startingPoint;
    }
};