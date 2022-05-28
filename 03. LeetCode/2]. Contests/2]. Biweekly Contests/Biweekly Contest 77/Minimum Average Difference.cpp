class Solution {
public:
    int minimumAverageDifference(vector<int>& nums) {
        if(nums.size()==1) return 0;
        int ind=INT_MAX;
        int n=nums.size();
        long long int sum1=0;
        long long int sum2=0;
        for(int i=0;i<n;i++)
            sum1+=nums[i];
        sum1=sum1-nums[0];
        sum2=nums[0];
        int mini=INT_MAX;
        
        vector<int> temp;
        int i=0;
        while(i<n){
            long long int first=sum2/(i+1);
            long long int second=0;
            int flag=0;
            if(i==n-1) {flag=1;second=0;}
            else second=sum1/(n-i-1);
            long long int avg=abs(first-second);
            temp.push_back(avg);
            if(avg<mini){
                mini=avg;
                ind=i;
            }
            ++i;
            if(flag==1) break;
            else{
            sum1=sum1-nums[i];
            sum2=sum2+nums[i];
            }
            
        }
        return ind;
    }
};