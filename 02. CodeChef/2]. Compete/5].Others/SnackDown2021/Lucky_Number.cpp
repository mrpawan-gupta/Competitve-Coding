#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while(t--){
        int arr[3];
        int c = 0 ;
        for (int i = 0; i < 3; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < 3;i++){
            if(arr[i]==7){
                c++;
                break;
            }
        }
        if(c!=0)
            cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}