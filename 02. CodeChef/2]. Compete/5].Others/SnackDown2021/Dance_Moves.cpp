#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<long>;
using vvl = vector<vl>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
const ll mod = 1e9 + 7, inf = 1e18;
#define pd push_back
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    fast;

      int t;
    cin>>t;
    int flag = 0;

    while(t--){
        int x, y, step = 0;
        cin>>x>>y;
        
        while(x!=y)
        {
            if(x<y)
            {
                x=x+2;
                step++;
                }
                if(x>y)
                {
                    x=x-1;
                    step++;
                }
        }
        cout<<step<<endl;
    }

    return 0;
}
