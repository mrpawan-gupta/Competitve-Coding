#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    
    int tt;
    for(cin >> tt; tt; tt--){
     int n;
     cin >> n;
     int power[n];
     for(int i = 0; i < n; i++) cin >> power[i];
     
     int ans[n], index[n];
     for(int i = 0; i < n; i++) index[i] = i;
     
     for(int i = 0; i < n; i++){
         ans[index[i]] = i+1;
         for(int j = i+1; j < n-1; j++){
             if(power[j] < power[j+1]){
                 swap(index[j],index[j+1]);
                 swap(power[j],power[j+1]);
             }
         }
         
     }
     for(int i = 0; i < n; i++) cout << ans[i] << " ";
     cout << endl;
 }
 return 0;
}