class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> v;
        
        int r = matrix.size();
        int c = matrix[0].size();
        
        int i,k=0,l=0;
        
        while(k<r and l<c){
            for(i=l; i<c; i++){
                v.push_back(matrix[k][i]);
            }
            k++;
            
            for(i=k; i<r; i++){
                v.push_back(matrix[i][c-1]);
            }
            c--;
            
            if(k<r){
                for(i=c-1; i>=l; i--){
                    v.push_back(matrix[r-1][i]);
                }
                r--;
            }
            if(l<c){
                for(i=r-1; i>=k; i--){
                    v.push_back(matrix[i][l]);
                }
                l++;
            }
        }
        
        return v;
    }
};