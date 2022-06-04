class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int in = 0; // increasing
        int de = 0; // decreasing
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] > nums[i-1]){
                in++;
                
            }
            if(nums[i]<nums[i-1]){
                de++;
            }
        }
        if(de!=0 and in!=0)return false;
        else return true;
    }
};