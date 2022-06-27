
#include <bits/stdc++.h>
using namespace std;

int countOfElements(int arr[], int n, int x);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
        
        cin >> x;

        cout << countOfElements(arr, n, x) << endl;
    }
    return 0;
}

int countOfElements(int arr[], int n, int x) 
{
    int cnt = 0;
    for(int i = 0; i < n; ++i){
        if(arr[i]<=x)cnt++;
    }
    return cnt;
}