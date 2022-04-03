class Solution{
public:
    vector<vector<int>> findWinners(vector<vector<int>> &matches){
        vector<int> W(100005, 0);
        vector<int> L(100005, 0);

        for (auto it : matches){
            W[it[0]]++;
            L[it[1]]++;
        }

        vector<vector<int>> ans(2);

        for (int i = 0; i < L.size(); i++){
            if ((L[i] == 0 && W[i] != 0) || (W[i] != 0 && L[i] == 0)){
                ans[0].push_back(i);
            }
            if (L[i] == 1){
                ans[1].push_back(i);
            }
        }

        return ans;
    }
};