#include <bits/stdc++.h>
using namespace std;

long long sumX(long long n,long long s){
    long long total = (n*(n+1))/2;
    long long out = total - s;
    if(out<=0 || out>n) return -1;
    return out;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    long long t,n,s;
    cin>>t;
    while(t--){
        cin>>n>>s;
        cout<< sumX(n,s)<<"\n";
    }
  return 0;
}