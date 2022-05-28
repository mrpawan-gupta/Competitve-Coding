class Solution{
public:
  vector<int> twoSum(vector<int> &nums, int target){
    int s = 0;
    int e = nums.size() - 1;
    while (s < e){
      if (nums[s] + nums[e] == target){
        vector<int>ans{s + 1, e + 1};
        return ans;
      }
      else if (nums[s] + nums[e] > target){
        e = e - 1;
      }
      else{
        s = s + 1;
      }
    }
    return {};
  }
};