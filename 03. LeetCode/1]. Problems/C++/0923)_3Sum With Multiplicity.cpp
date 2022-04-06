class Solution {
private:
    const int MOD = 1e9 + 7;
    long long c3(long long n) {
        return n*(n-1)*(n-2)/6;
    }
    long long c2(long long n) {
        return n*(n-1)/2;
    }
public:
    int threeSumMulti(vector<int>& arr, int target) {
        unordered_map<int, int> nums;
        for (int &i: arr) {
            if (!nums.count(i))
                nums[i] = 0;
            nums[i]++;
        }
        vector<int> it;
        for (auto i : nums) {
            it.push_back(i.first);
        }
        long long ans = 0;
        for (int i = 0; i < it.size() ; i++) {
            for (int j = i+1; j < it.size() ; j++) {
                int needed = target-it[i]-it[j];
                if (nums.count(needed)) {
                    if (needed != it[i] && needed != it[j]) {
                        ans = (ans + nums[needed]*nums[it[i]]*nums[it[j]])%MOD;
                    }
                }
            }
        }
        ans /= 3;
        for (int & i : it) {
            int needed = target - i*2;
            if (nums.count(needed)) {
                if (needed == i) {
                    ans = (ans + c3(nums[i]))%MOD;
                } else {
                    ans = (ans + nums[needed]*c2(nums[i]));
                }
            }
        }
        return ans;
    }
};