#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        pair<int,int> b[n];
        unordered_map<int,int>mp,mp2;
        for(int i=0;i<n;i++){
            int tmp;
            cin>>tmp;
            b[i]=make_pair(tmp,i);
        }
        sort(b,b+n);
        int lowest = 0;
        int a[n];
        for(int i=0;i<n;i++){
            if(lowest<b[i].first){
                a[b[i].second]=lowest;
                lowest++;
            }
            else
                a[b[i].second]=b[i].first;
        } 
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
