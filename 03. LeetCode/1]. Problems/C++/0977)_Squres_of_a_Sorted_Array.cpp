class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {

        vector<int> ans;
        
        int n = nums.size();
        
        int pos = n;
        
        int l = 0, h = nums.size()-1;
        
        while (l <= h){
            int m = l + (h-l)/2;
            
            if (nums[m] >= 0){
                pos = m;
                h = m-1;
            }
            else{
                l = m+1;
            }
        }
        
        
        int neg = pos - 1;
        
        
        while (pos < n || neg >= 0){
            int left, right;
            
            left = (neg >= 0) ? 0-nums[neg] : INT_MAX;
            
            right = (pos < n) ? nums[pos] : INT_MAX;
            
            
            if (left < right){
                neg--;
                ans.push_back(left*left);
            }
            else{
                pos++;
                ans.push_back(right*right);
            }
        }
        
        return ans;
        
    }
};