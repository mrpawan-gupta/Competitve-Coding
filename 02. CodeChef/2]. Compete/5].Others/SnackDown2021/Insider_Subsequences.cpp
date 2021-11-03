#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
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
#define pb push_back
#define fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main() {
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vi v;
        for(int i=0;i<n;i++){
            int temp; cin>>temp;
            v.push_back(temp);
        }
        vi aa;
        vi bb;
        int l=-1, c=1;
        for(int i=0;i<n-1;i++){
            if(v[i]>v[i+1] && c==0){
                if(v[i]-l>1){
                aa.push_back(l+1);
                bb.push_back(v[i]-1);
                }
                c=1;
            }else if(v[i]<v[i+1]){
                if(c==1){
                    c=0;l=v[i];
                }
            }
        }
        if(c==0){
            if(v[n-1]-l>1){
                aa.push_back(l+1);
                bb.push_back(v[n-1]-1);
            }
        }
        c=0;l=-1;
        for(int i=n-1;i>0;i--){
            if(v[i]>v[i-1] && c==1){
                if(v[i]-l>1){
                    aa.push_back(l+1);
                    bb.push_back(v[i]-1);
                }
                c=0;
                }else if(v[i]<v[i-1]){
                    if(c==0){
                        c=1; l=v[i];
                    }
                }
        }
        if(c==1){
            if(v[0]-l>1){
                aa.push_back(l+1);
                bb.push_back(v[0]-1);
            }
        }
        int len=aa.size();
        sort(aa.begin(), aa.end());
        sort(bb.begin(), bb.end());
        vi m(n-1, -1);
        vi M(n-1, -1);
        int i=0, j=0;c=0;
        while(i<len){
            while(bb[j]<aa[i]){
                c--;j++;
            }
            c++;
            if(m[c-1]==-1) m[c-1]=aa[i];
            i++;
        }
        sort(aa.begin(), aa.end(), greater<int>());
        sort(bb.begin(), bb.end(), greater<int>());
        i=0;j=0;c=0;
        while(i<len){
            while(aa[j]>bb[i]){
                c--;j++;
            }
            c++;
            if(M[c-1]==-1) M[c-1]=bb[i];
            i++;
        }
        for(int i=0;i<n-1;i++){
            cout<<m[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<n-1;i++){
            cout<<M[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
