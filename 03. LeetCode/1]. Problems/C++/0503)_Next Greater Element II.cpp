class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        stack<int> st;
        int n=nums.size();
        for(int i=n-2;i>=0;i--){
            st.push(nums[i]);
        }
        
        vector<int> res(n,-1);
        for(int i=n-1;i>=0;i--){
            while(st.empty()==false and st.top()<=nums[i]){
                st.pop();
            }
            
            if(!st.empty()){
                res[i]=st.top();
            }
            
            st.push(nums[i]);
        }
        
        return res;
    }
};