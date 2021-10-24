#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

     int t;
    cin >> t;
    while (t--){
        int n;
        string s,t;
        cin>>n>>s>>t;
        bool flag1 = false,flag2=false;
        
        for(int i=0;i<n;i++){
            if(t[i]=='0')  flag1 = true;
            else flag2 = true;
        }
        
       if((flag1 && flag2) || s==t) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }

    return 0;
}