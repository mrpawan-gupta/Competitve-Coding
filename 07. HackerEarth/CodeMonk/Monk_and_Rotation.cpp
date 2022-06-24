#include <bits/stdc++.h>
using namespace std;

void Helper(int arr[], int dp[], int n, int k){
    k = k % n;
    int j = 0;
    for (int i = n - k; i < n; i++){
        arr[j++] = dp[i];
    }
    for (int i = 0; i < n - k; i++){
        arr[j++] = dp[i];
    }
}

int main(){

    int t;
    cin >> t;

    while (t--){
        int n, k;
        cin >> n >> k;
        int arr[n], dp[n];
        for (int i = 0; i < n; i++){
            cin >> arr[i];
            dp[i] = arr[i];
        }
        Helper(arr, dp, n, k);
        for (int i = 0; i < n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    return 0;
}