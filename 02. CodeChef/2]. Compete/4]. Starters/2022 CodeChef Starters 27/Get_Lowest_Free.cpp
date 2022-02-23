#include <bits/stdc++.h>
using namespace std;

int solve(){
    int arr[3];
    for (int i = 0; i < 3; i++){
        cin >> arr[i];
    }
    sort(arr, arr + 3);
    cout << arr[1] + arr[2] << endl;

    return 0;
}

int main(){
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}