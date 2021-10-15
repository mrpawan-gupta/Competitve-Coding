#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t ; cin >> t;
    while(t--){
        int n ; cin >> n ;
        int a[n] ; 
        int b[n] ;
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        for (int i = 0; i < n; i++){
            cin >> b[i];
        }
        sort(a, a + n);
        sort(b, b + n);
        int result = 0;
 

        for (int i = 0; i < n; ++i) {
            result = result + abs(a[i] - b[i]);
        }
        cout << result << endl;
    }
    return 0;
}