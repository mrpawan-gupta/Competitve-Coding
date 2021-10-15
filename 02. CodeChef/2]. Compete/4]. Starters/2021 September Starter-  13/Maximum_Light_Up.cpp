#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
  // your code goes here
  ll t;
  cin>>t;
  while(t--)
  {
      ll r,a,b,c,x,y,cnt=0,cnt1=0;
      cin>>r>>a>>b>>c>>x>>y;
     // ll k=r;
      ll ac=(a*x)+b;
      ll cc=(a*y)+c;
     // cout<<ac<<" "<<cc<<" "<<"\n";
      ll z=min(ac,cc);
     // cout<<z<<" ";
     ll ans=r/z;
      cout<<ans<<"\n";
     // cout<<cnt1<<"\n";
  }
  return 0;
}