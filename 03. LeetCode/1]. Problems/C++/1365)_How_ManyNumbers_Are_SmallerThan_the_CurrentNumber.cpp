class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> v ;
        int n = nums.size();
        int c= 0 ;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ;j < n ; j++){
                if(nums[j]<nums[i] && j!=i) c++;
            }
            v.push_back(c);
            c = 0 ;
        }
        return v ;
    }
};