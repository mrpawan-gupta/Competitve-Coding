class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }
        int res = 0;
        int temp = x;
        while(temp){
            if(res>INT_MAX/10 || res<INT_MIN/10) return 0;
            res = res*10+temp%10;
            temp /= 10;
        }
        if(x == res){
            return true;
        }
        else{
            return false;
        }
    }
};