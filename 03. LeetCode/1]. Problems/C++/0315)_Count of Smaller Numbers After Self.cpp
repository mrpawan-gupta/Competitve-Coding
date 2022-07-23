class Solution {
public:
    
    vector<int> countSmaller(vector<int>& nums) {
        
        int N = 1e4, maxN = 4*(2*N);
        vector<int> temp(maxN),freq(nums.size());
        for(int i=nums.size()-1;i>=0;i--){
            freq[i] = sum(temp,1,0,2*N,0,nums[i]+N-1);
            add(temp,1,0,2*N,nums[i]+N);
        }
        return freq;
    }
    
    int sum(vector<int>& temp, int v, int left, int right, int l, int r){
        if(l>r) return 0;
        if(left==l && right==r)
            return temp[v];
        int mid = (left+right)/2;
        return  sum(temp,2*v,left,mid,l,min(mid,r)) + sum(temp,2*v+1,mid+1,right,max(mid+1,l),r);
    }
    
    void add(vector<int>& temp, int v, int left, int right, int pos){
        if(left==right)
            temp[v]++;
        else{
            temp[v]++;
            int mid = (left+right)/2;
            if(pos<=mid)
                add(temp,2*v,left,mid,pos);
            else
                add(temp,2*v+1,mid+1,right,pos);
        }
    }
    
};