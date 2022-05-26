/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solve(){
            long long n, d = 0, count = 0;
            cin>>n;
            long long a[n];
            for (int i = 0; i<n; i++)
            cin>>a[i];
            for (int i = 0; i<n-1; i++) {
                d = 0;
                if(a[i+1]<a[i])
                {
                    d = a[i] - a[i+1];
                    a[i+1] = a[i];
                    count = count + d;
                }
            }
            cout<<count<<endl;
        }
};

int main(int argc, char const *argv[]){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    //cin >> t;

    while(t--){
        Solution ob;
        ob.solve();
    }

    return 0;
}