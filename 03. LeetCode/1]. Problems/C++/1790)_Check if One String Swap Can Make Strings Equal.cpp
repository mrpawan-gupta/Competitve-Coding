class Solution{
public:
    bool areAlmostEqual(string s1, string s2) {
        if (s1.size() != s2.size()) {
            return false;
        }
        vector<pair<int, int>> arr;
        int count = 0;

        for (int i = 0; i < s1.size(); i++){
            if (s1[i] == s2[i]){
                count++;
            }
            else {
                arr.push_back({s1[i], s2[i]});
            }
        }
        if (count == s1.size()) {
            return true;
        }
        if (s1.size() - 2 == count) {
            if (arr[0].first == arr[1].second && arr[0].second == arr[1].first){
                return true;
            }
        }
        return false;
    }
};