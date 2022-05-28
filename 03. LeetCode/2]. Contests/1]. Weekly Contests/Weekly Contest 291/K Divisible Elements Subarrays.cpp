class Solution {
public:
    int countDistinct(vector<int>& nums, int k, int p) {
        int res = 0;
        unordered_set<string> hashset;
        for (int i = 0; i < nums.size(); i++){
            int c = 0;
            string check;
            for (int j = i; j < nums.size(); j++){
                if (nums[j] % p == 0){
                    c++;
                }
                if (c > k) {
                    break;
                }
                string element = to_string(nums[j]);
                for (char c : element){
                    check.push_back(c);
                }
                check.push_back(' ');
                if (hashset.find(check) == hashset.end()){
                    res += 1;
                    hashset.insert(check);
                }
            }
        }

        return res;
    }
};