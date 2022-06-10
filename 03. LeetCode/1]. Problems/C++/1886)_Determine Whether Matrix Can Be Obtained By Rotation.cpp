class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();
        int cnt = 3;
        
        if (mat == target) {
            return true;
        }
        
        while(cnt--) {
            for (int i = 0; i < n; i++) {
                for (int j = i + 1; j < n; j++) {
                    swap(mat[i][j], mat[j][i]);
                }
            }
            
            for (int i = 0; i < n; i++) {
                reverse(mat[i].begin(), mat[i].end());
            }
            
            if (mat == target) {
                return true;
            }
        }
        
        return false;
    }
};