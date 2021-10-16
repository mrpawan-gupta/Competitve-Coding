class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int i = 0, sz = nums.size();
    while (nums[max(0, start - i)] != target && nums[min(start + i, sz - 1)] != target)
        ++i;
    return i;
    }
};