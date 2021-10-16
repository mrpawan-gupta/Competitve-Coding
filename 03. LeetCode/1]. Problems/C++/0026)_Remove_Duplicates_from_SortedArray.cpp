class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
          int num_duplicates = 0;
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] == nums[i - 1]) {
            ++num_duplicates;
        } else {
            nums[i - num_duplicates] = nums[i];
        }
    }
    nums.erase(nums.end() - num_duplicates, nums.end());  // add this line!!!
    return nums.size();
    }
};