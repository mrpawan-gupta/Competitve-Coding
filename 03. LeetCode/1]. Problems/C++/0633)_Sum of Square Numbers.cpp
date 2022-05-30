class Solution {
public:
    bool judgeSquareSum(long c) {
        long temp_b = 0;
        long max_a = sqrt(c);
        for (long a = max_a; a >= max_a/2; a--){
            long a_ = a*a;
            for (long b = temp_b; b*b <= c-a_; b++){
                if (a*a + b*b == c){
                    return true;
                }
                else{
                    temp_b = b + 1;
                }
            }
        }
        return false;
        
    }
};