class Solution {
public:
    int countPrimes(int n) {
        int count = 0;
        vector<bool> sieve(n, true);
        for(int i=2; i<n; i++){
            if(sieve[i]){
                count++;
                int k =2; 
                while(k*i<n){
                    sieve[k*i] = false;
                    k++;
                }
            }
        }
        return count;
    }
};  