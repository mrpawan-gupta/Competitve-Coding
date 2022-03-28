class Solution {
    public int climbStairs(int n) {
        return (int) ((Math.pow(((1 + Math.sqrt(5)) / 2), n+1) - 
                Math.pow(((1 - Math.sqrt(5)) / 2), n+1)) / Math.sqrt(5));
    }
} 