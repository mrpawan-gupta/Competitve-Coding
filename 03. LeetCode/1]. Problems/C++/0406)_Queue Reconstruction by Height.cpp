class Solution {
public:
    vector<vector<int>> reconstructQueue(vector<vector<int>>& people) {
        sort(people.begin(), people.end(), [](vector<int>& a, vector<int>& b) {
            return a[0] > b[0] || (a[0] == b[0] && a[1] < b[1]);
        });
        vector<vector<int>> result;   
        list<vector<int>> __list;
        list<vector<int>>::iterator __it;
        int temp;
        for(auto& p: people) {
                __it = __list.begin();
                temp = p[1];
                while(temp--) ++__it;
                __list.insert(__it, p);   
        }
        move(__list.begin(), __list.end(), back_inserter(result));
        return result;    
    }
};
