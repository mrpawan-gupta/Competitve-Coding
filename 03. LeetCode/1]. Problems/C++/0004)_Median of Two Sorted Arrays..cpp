class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums2.size()<nums1.size()) return findMedianSortedArrays(nums2,nums1);
        int n1=nums1.size();
        int n2=nums2.size();
        int start = 0;
        int end = n1;
        while(start <= end){
            int part1 =(start+end)>>1;
            int part2 =(n1+n2+1)/2-part1;
            int l1 = part1==0?INT_MIN:nums1[part1-1];
            int l2 = part2==0?INT_MIN:nums2[part2-1];
            int r1 = part1==n1?INT_MAX:nums1[part1];
            int r2 = part2==n2?INT_MAX:nums2[part2];
            if(l1<=r2 and l2<=r1){
                if((n1+n2)%2==0)return (max(l1,l2)+min(r1,r2))/2.0;
                else return max(l1,l2);
            }
            else if(l1>r2)end=part1-1;
            else start=part1+1;
        }
        return 0.0;
    }
};