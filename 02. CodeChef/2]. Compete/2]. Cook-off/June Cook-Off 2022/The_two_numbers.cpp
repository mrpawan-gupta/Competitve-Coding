/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solve(){
            long long n;
        cin >> n;
        if(n == 2){
            cout << 0 << endl;
            return;
        }
        if(n == 4){
            cout << 2 << endl;
            return;
        }
       
        if(n%2 == 0){
            long long N = n/2;
            long long checkN;
            long long j;
            if(N % 2 == 0){
                checkN = N-1;
                j = N+1;
            }else{
                checkN = N+2;
                j = N-2;
            }
        long long cntGCD = __gcd(checkN,j);
        long long ans = (checkN*j)/cntGCD;
        cout << ans - cntGCD << endl;
        }
        else{
            long long N = n/2+1;
            long long checkN = n/2;
            long long ans = (N*checkN);
            cout << ans - 1 << endl;
        }
        }
};

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;

    while(t--){
        Solution ob;
        ob.solve();
    }

    return 0;
}