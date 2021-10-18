class Solution {
public:
    int totalMoney(int n) {
        int res=0,x=1;
        while(n>=7)
        {
            res+=(7*(2*x+6))/2;
            n-=7;
            x++;
        }
        while(n--)
        {
            res+=x;
            x++;
        }
        return res;
    }
};