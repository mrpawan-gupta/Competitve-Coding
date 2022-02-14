#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int x;
        cin >> x;

        if(1<=x and x<100){
            cout << "Easy" << endl;
        }else if(x<200){
            cout << "Medium" << endl;
        } else{
            cout << "Hard" << endl;
        }
    }

    return 0 ;
}