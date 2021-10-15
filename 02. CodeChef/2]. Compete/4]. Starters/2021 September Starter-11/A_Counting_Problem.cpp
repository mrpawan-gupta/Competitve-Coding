#include <bits/stdc++.h>
#define long long int
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);

    int t ; cin >> t ;

    while(t--){
        int n ; cin >> n ;
        int b[n-1];
        int max = INT_MIN ;
        for(int i = 0 ; i < n-1 ; i++){
            cin >> b[i] ;
            if(max < b[i]){
                max = b[i];
            }
        }
        int a =pow(10,5);

        int ans = (a-max)+(a-max+1); 
        cout << ans << endl;
    }
    return 0 ;
}