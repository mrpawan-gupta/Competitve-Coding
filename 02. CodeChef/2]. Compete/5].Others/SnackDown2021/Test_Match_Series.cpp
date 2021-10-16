#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--)
    {
        int arr[5];

        for (int i = 0; i < 5; i++)
        {
            cin >> arr[i];
        }

        int j = 0;
        int e = 0;
        int d = 0;

        for (int i = 0; i < 5; i++)
        {
            if(arr[i]==1){
                j++;
            }
            else if(arr[i]==2){
                e++;
            }
            else if(arr[i]==0){
                d++;
            }
        }
        
        if (j > e)
        {
            cout << "INDIA" << endl;
        }
        else if(e>j)
        {
            cout << "ENGLAND" << endl;
        }
        else if(j==e)
            cout << "DRAW" << endl;
    }

    return 0;
}