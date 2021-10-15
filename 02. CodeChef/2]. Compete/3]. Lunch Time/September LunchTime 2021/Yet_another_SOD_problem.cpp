#include <bits/stdc++.h>
using namespace std;

long long solve(){ 
    long long int l ;
    long long int r ;

    cin >> l >> r;
    
    for(int i = 0; i < 3 ; i++) {
        if(l>r){
            return 0  ;
        }
        if(l <= r && l%3==0){
            break ;
        }
        else l++ ;
    }

    for(int i = 0; i < 3 ; i++){
        if(l <= r && r%3==0){
            break ;
        }
        else r-- ;
    }

    long long int a = (l/3);
    long long int b = (r/3);

    return abs(a-b)+1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t ; cin >> t;
    while (t--){
        cout << solve() << "\n";
    }
    return 0;
}