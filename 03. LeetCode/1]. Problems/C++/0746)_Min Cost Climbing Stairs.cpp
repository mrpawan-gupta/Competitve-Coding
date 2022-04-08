class Solution{
public:
    int minCostClimbingStairs(vector<int> &cost){
        int prev = 0, prevToPrev = 0;
        int temp;
        for (int i = 2; i < cost.size() + 1; i++)
        {
            temp = prev;
            prev = min(cost[i - 2] + prevToPrev, cost[i - 1] + prev);
            prevToPrev = temp;
        }

        return prev;
    }
};