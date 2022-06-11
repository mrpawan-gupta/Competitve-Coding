class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size(), s = 0, ans = 1e6;
        for(int i = 0; i < n ; i++) s += nums[i];
        
        if(s < x) return -1;
        int st = 0, end = 0, Win = 0;
        while(end < n){            
            Win += nums[end];            
            while(Win > (s - x)){
                Win -= nums[st];
                st++;
            }            
            if(Win == s - x){
                ans = min((int)ans, (int)(n - (end - st + 1)));
            }            
            end++;            
        }
        return (ans == 1e6 ? -1 : ans);
        
    }
};