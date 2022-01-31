/*
    solution By :- Pawan Gupta [ CF - Mr.pawan_gupta, CC - mrpavan_gupta]
*/

#include <bits/stdc++.h>
using namespace std;

void solveTestCases(){
    int n, x, y;
    cin >> n >> x >> y;
    int arr1[n], arr2[n], cnt = 0;
    for (int i = 0; i < n; i++)
        cin >> arr1[i];
    for (int i = 0; i < n; i++)
        cin >> arr2[i];
    for (int i = 0; i < n; i++){
        if ((arr1[i] + x == arr2[i]) || (arr1[i] + y == arr2[i]))
            continue;
        else
            cnt++;
    }
    if (cnt != 0)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}

int main(int argc, char const *argv[]){

    int t = 1;
    cin >> t;

    while (t--){
        solveTestCases();
    }

    return 0;
}