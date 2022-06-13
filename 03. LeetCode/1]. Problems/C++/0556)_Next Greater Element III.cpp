class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n-2;
        while(i >= 0 && nums[i] >= nums[i+1]) {
            i--;
        }
        if(i >= 0) {
            int j = n - 1;
            while(nums[j] <= nums[i]) {
                j--;
            }
            swap(nums[i], nums[j]);
        }
        reverse(nums.begin() + i + 1, nums.end());
    }
    
    long long nextGreaterElement(long long n) {
        vector<int> digits;
        int store = n;
        while(n > 0) {
            digits.push_back(n%10);
            n /= 10;
        }
        n = store;
        reverse(digits.begin(), digits.end());
        
        nextPermutation(digits);
        
        long long num = 0;
        for(int i = 0; i < digits.size(); i++) {
            num = num * 10 + digits[i];
        }
        
        return (num <= n) ? -1 : (num <= INT_MAX) ? num : -1;
    }
};