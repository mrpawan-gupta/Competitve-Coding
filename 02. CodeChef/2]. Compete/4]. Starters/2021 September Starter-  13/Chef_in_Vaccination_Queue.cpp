#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t ; cin >> t;
// x--> 0 , y---> 1 ; p --.pos
    while (t--){
        int n , p , x, y ; 
        cin >> n >> p >> x >> y;

        int arr[n];

        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }
        int ans = 0;
        for(int i = 0; i < n; i++){
            if(i<p){
                if(arr[i] == 0) ans+= x ;
                else ans+= y ;
            }
        }

        cout << ans << endl;
    }   
    return 0;
}