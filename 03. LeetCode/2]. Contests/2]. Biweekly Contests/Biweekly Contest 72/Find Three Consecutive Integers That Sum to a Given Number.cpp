class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long> v;
        long long cnt = num/3;
        if(cnt*3==num){
            v.push_back(cnt-1);
            v.push_back(cnt);
            v.push_back(cnt+1);
        }
 
        return v;
    }
};