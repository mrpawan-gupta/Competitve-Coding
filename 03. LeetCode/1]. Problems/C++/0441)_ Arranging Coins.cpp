class Solution {
public:
    int arrangeCoins(int n) {
        long long start=1;
        long long end=n;
        long long ans=-1;
        while(start<=end) {
            long long mid=end-((end-start)/2);
            long long coinsNeeded = (mid * (mid + 1))/2;
            if(coinsNeeded<=n)   {
                start=mid+1;
                ans=start;
            }else  {
                end=mid-1;
            }
        }
        return ans-1;
    }
};