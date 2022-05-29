class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int k=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0)
                k++;
        }
        if(k>1) return true;
        for(int i=0;i<arr.size();i++){
            
            int t=2*arr[i];
            int l=0,h=arr.size()-1;
            while(l<=h){
                int mid=l+(h-l)/2;
                if(t==arr[mid] && arr[i]!= t)
                    return true;
                if(t<arr[mid])
                    h=mid-1;
                else
                    l=mid+1;
            }
        }
        return false;
    }
};