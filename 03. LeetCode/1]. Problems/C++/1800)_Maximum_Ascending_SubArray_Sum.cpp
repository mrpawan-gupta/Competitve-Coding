class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int n  = nums.size();
        int sum = nums[0];
        int current  = sum ;
        for(int i = 1 ; i <  n ; i++){
            if(nums[i]>nums[i-1]){
                sum+=nums[i];
            }
            else sum =  nums[i];
            current = max(current,sum);
        }
        return current; 
    }
};
  