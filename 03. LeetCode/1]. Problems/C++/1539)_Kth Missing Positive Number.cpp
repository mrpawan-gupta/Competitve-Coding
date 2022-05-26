class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i,ans=1;
        for(i=0;i<arr.size();i++){
            if(arr[i]!=ans++){
                k--;
                i--;
            }
            if(k==0)
                return ans-1;
        }
        return arr[arr.size()-1]+k;
    }
};