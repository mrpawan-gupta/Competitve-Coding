/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

map<string,bool> m;
int n,ans;
string s;

class Solution{
    public:
        void solve(){
            cin>>n;
            for(int i=1;i<=n;i++){
                cin>>s;
                while(s.find('u')!=-1) s.replace(s.find('u'),1,"oo");
                while(s.find("kh")!=-1) s.replace(s.find("kh"),2,"h");
                if(!m[s]) ans++;
                m[s]=1;
            }
            cout<<ans<<'\n';
        }
};

int main(int argc, char const *argv[]){

    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    cin.failbit; cin.badbit;

    int t = 1;
    //cin >> t;

    while(t--){
        Solution ob;
        ob.solve();
    }

    return 0;
}