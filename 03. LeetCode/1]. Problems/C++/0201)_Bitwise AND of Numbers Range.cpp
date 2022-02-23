class Solution{
public:
    int rangeBitwiseAnd(int left, int right){
        int k = highestPowerof2(right);
        if (k > left){
            return 0;
        }
        if (right == left){
            return left & right;
        }
        return k + rangeBitwiseAnd(left - k, right - k);
    }

    unsigned highestPowerof2(unsigned x){
        x |= x >> 1;
        x |= x >> 2;
        x |= x >> 4;
        x |= x >> 8;
        x |= x >> 16;
        return x ^ (x >> 1);
    }
};