class Solution{
public:
    bool canPlaceFlowers(vector<int> &flowerbed, int n){
        int s = flowerbed.size();
        for (int i = 0; i < s; i++){
            if (flowerbed[i] == 0) {
                int P = (i == 0) || flowerbed[i - 1] == 0 ? 0 : 1;
                int N = (i == (s - 1) || flowerbed[i + 1] == 0 ? 0 : 1);
                if (P == 0 && N == 0)
                {
                    n--;
                    flowerbed[i] = 1;
                }
            }
        }
        return n <= 0;
    }
};