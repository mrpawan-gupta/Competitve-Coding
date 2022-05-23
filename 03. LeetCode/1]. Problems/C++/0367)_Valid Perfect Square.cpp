class Solution {
public:
    bool isPerfectSquare(long long int num) {
        if(num == 1 || num ==2) return true ;
        for(long long int i = 2 ; i*i<= num ; i++ ){
            if(i*i == num){
                return true ;
            }
        }
        
        return false ;
    }
};