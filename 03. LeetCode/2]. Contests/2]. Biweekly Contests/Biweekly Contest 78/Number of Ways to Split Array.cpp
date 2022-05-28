class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        int n = nums.size();
        long long cnt = 0;
        for(int i=0;i<n;i++) cnt += nums[i];
        long long sum = 0;
        int ans = 0;
        for(int i=0;i<n-1;i++){
            sum += nums[i];
            cnt -= nums[i];
            ans += sum>=cnt;
        }
        return ans;
    }
};