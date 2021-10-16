class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
	int previous = nums[0];
	bool used = false;
	for (int i = 1; i < nums.size(); i++){
		if (nums[i] <= previous){ // it's not strictly increasing
            if (used)
                return false;
            used = true;
            if (i == 1 || nums[i] > nums[i - 2]) 
                previous = nums[i];
		} 
        else
			previous = nums[i];
	}
	return true;
}
};