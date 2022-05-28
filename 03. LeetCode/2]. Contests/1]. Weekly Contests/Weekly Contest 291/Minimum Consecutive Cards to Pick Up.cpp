class Solution {
public:
    int minimumCardPickup(vector<int>& cards) {
        unordered_map<int,vector<int>> mp;
        int n = cards.size();
        for(int i=0;i<n;i++){
            mp[cards[i]].push_back(i);
        }
        if(mp.size()==n)return -1;
        int ans = INT_MAX;
        for(auto it:mp){
            if(it.second.size()==1)continue;
            for(int i = 1;i<it.second.size();i++)  {
                int diff = (mp[it.first][i]-mp[it.first][i-1] +1);
                ans = min(ans,diff) ;
            }
        }
        return ans;
    }
};