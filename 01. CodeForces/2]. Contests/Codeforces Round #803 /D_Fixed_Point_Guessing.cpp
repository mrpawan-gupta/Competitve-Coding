
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
         long long query(long long __left, long long __right){
            long long x;
            cout<<"? "<<__left<<" "<<__right<<endl;
            vector<long long> ar(__right - __left + 1);
            int __size_ = __right - __left + 1;
            int count = 0;
            for(int i =0; i < __size_; ++i){
                cin >> ar[i];
                if(ar[i] >= __left && ar[i] <= __right) ++count;
            }
            if(count%2) return 1;
            else return 0;
         }
    
        void __solve(){
         long long n; cin >> n;
         long long __left = 1; long long __right = n;
         long long ans = 0;
         while(__left < __right) {
          long long __mid = (__left + __right)/2;
          long long ___idx = query(__left , __mid);
          if(___idx) {
              __right = __mid;
          } else {
              __left = __mid+1;
          }
         
         }
         cout<<"! "<< __left << endl;
        }
};

int main(int argc, char const *argv[]){

    int __test = 1;
    cin >> __test;

    while(__test--){
        Solution __ob;
        __ob.__solve();
    }

    return 0;
}