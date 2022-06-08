class Solution {
public:
  vector<int> addToArrayForm(vector<int>& num, int k) {
    int remainder = 0, i = num.size()-1;
    
    while(k &&  i >= 0 ){
      num[i] += k %10 + remainder;
      remainder = num[i]/10;
      num[i--] %= 10;
      k /= 10;
    }
    
    while(i >= 0 && remainder){
      num[i]++;
      remainder = num[i]/10;
      num[i--] %= 10;
    }
    
    while(k || remainder){
      num.insert(num.begin(),k%10 + remainder);
      remainder = num[0]/10;
      num[0] %= 10;
      k /= 10;
    }
   
    return num;
  }
};