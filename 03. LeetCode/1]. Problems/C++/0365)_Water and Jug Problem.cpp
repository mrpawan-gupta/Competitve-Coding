class Solution {
public:
    int gcd(int a, int b){
        if(a % b == 0) {
            return b;
        }else{
            return gcd(b, a % b);
        }
    }
    bool canMeasureWater(int jug1Capacity, int jug2Capacity, int targetCapacit) {
        if(targetCapacit == 0 || targetCapacit == jug1Capacity + jug2Capacity) return true;
        if(targetCapacit > jug1Capacity + jug2Capacity) return false;
        if(jug1Capacity == 0) return targetCapacit == jug2Capacity;
        if(jug2Capacity == 0) return targetCapacit == jug1Capacity;
        if(jug1Capacity == jug2Capacity) return targetCapacit == jug1Capacity;
        int inJug1 = (jug2Capacity > jug1Capacity)? jug2Capacity : jug1Capacity;
        int inJug2 = (jug2Capacity > jug1Capacity)? jug1Capacity : jug2Capacity;
        int r = inJug1 % inJug2;
        if (r == 0){
            return targetCapacit % inJug2 == 0;
        }else{
            return targetCapacit % gcd(r, inJug2) == 0;
        }
    }
};
