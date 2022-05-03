class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();

        if(n==1)return 0;

        bool flag = false;
        int number = 1000000;
        int rgt = n, lft = -1;
        for(int i=1;i<n;i++){
            if(nums[i] < nums[i-1]){
                flag = true;
            }

            if(flag){
                if(nums[i] < number){
                    number = nums[i];
                }
                while(lft != -1 && nums[lft] > number) lft--;
            }
            else {
                lft = i;
            }
        }

        if(flag == false) return 0;

        number = -1000000;
        flag = false;
        for(int i=n-2;i>=0;i--){
            if(nums[i] > nums[i+1]){
                flag = true;
            }

            if(flag){
                if(nums[i] > number){
                    number = nums[i];
                }
                while(rgt != n && nums[rgt] < number) rgt++;
            }
            else {
                rgt = i;
            }
        }

        lft++;

        return (rgt - lft);
    }
};