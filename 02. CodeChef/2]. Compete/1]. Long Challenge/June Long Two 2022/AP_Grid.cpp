/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void RowOne(int p,int q){
            for(int i=0;i<q;i++)    {
                cout << (i+1) << " ";
            }
            cout << endl;
            int CommonDiff =1+p+1;
            for(int i=1;i<p;i++){
                int max=CommonDiff ;
                cout << (max) << " ";
                for(int j=1;j<q;j++){
                    cout << (max+i+1) << " ";
                    max+=i+1;
                }
                CommonDiff += p+1;
                cout << endl;
            }
        }
        void RowTwo(int p,int q){
            int sum=0;
            for(int i=0,a=q+1;i<p;i++,a++){
                sum=i+1;
                cout << (sum) << " ";
                for(int j=1;j<q;j++){
                    cout << (sum+a) << " ";
                    sum+=a;
                }
                cout << endl;
            }
        }
        void solve(){
            int n, m ;
            cin >> n >> m;
            if(n<m) RowOne(n,m);
            else RowTwo(n,m);
        }
};

int main(int argc, char const *argv[]){

    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin.failbit; cin.badbit;

    int t = 1;
    cin >> t;

    while(t--){
        Solution ob;
        ob.solve();
    }

    return 0;
}