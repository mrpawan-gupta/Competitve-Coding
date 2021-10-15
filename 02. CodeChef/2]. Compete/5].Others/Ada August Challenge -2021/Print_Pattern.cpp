#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ;
        
        int arr[n][n], k, i, j, p = 1, f;
        for (k = 0; k < n; k++) {
            j = k;
            i = 0;
            while (j >= 0) {
                arr[i][j] = p;
                p++;
                i = i + 1;
                j = j - 1;
            }
        }

        for (k = 1; k < n; k++) {
        i = k;
        j = n - 1;
        f = k;
        while (j >= f) {
            arr[i][j] = p;
            p++;
            i = i + 1;
            j = j - 1;
        }
    }
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}