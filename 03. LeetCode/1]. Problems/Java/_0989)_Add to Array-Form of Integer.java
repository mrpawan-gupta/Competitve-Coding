class Solution {
  public List<Integer> addToArrayForm(int[] num, int k) {
      List<Integer> res = new ArrayList<>();
      int c = 0;
      int n = num.length;
      for (int i = n- 1; i >= 0; i--) {
          int a;
          if (i == num.length - 1) {
              a = num[i] + k + c;
          } else {
              a = num[i] + c;
          }
          c = a / 10;
          a = a % 10;
          res.add(a);
      }
      while (c!=0){
          int a=c%10;
          res.add(a);
          c/=10;
      }
      Collections.reverse(res);
      return res;
  }
}