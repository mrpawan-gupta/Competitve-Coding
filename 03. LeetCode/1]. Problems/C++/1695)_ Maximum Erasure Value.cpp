class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n = nums.size();
        int L = 0;
        int R = 0;
        
        unordered_map<int, int> freqMap;
        int sum = 0;
        int ans = 0;
        while(R < n) {
            int right = nums[R++];
            sum += right;
            freqMap[right]++;
            
            while(freqMap[right] > 1) {
                int left = nums[L++];
                freqMap[left]--;
                sum -= left;
            }
            ans = max(ans, sum);
        }
        return ans;
    }
};