#include<bits/stdc++.h>
using namespace std;

int main(){
    int t ; cin >> t ;
    while(t--){
        int n ; cin >> n ;
        int v[n] ;
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        sort(v ,v+n);
        int area  = 1;
        int c = 0 ;
        for(int i = n-1; i >= 0 ; i--){
            if(v[i] == v[i-1] & v[i]!= area){
                area *= v[i];
                c++;
            }
            if(c==2) break; 
        }
        if(area == 1 || c ==1){
            cout << -1 << endl;
        }
        else cout << area << endl;
    }
}