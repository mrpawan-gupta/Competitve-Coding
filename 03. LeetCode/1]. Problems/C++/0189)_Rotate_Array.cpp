class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        //rotate_TLE(nums,k);
        //rotate_additonalMemory(nums,k);
        //rotate_reverse(nums,k);
        rotate_makeAcopy(nums,k);
    }
    
    void rotate_makeAcopy(vector<int>& nums, int k) {
        vector<int>copy=nums;
        for(int i=0;i<nums.size();i++)
        {
            nums[(i+k)%nums.size()]=copy[i];
        }
    }
};