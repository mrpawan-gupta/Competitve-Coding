#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define f first
#define s second
#define fast   ios::sync_with_stdio(false); cin.tie(0);
#define pii pair<int,int> 
#define REP(i,k,n) for(int i=k;i<n;i++)
#define REPREV(i,k,n) for(int i=n-1;i>=k;i--)
#define pb push_back
#define mp make_pair
#define vpi vector<pair<int,int>>
#define vi vector<int>
#define sortv(v) sort(v.begin(),v.end())
#define sortrev(v) sort(v.begin(),v.end(),greater<int>())
#define int long long int
#define ub(v,idx,val) upper_bound(v.begin()+idx,v.end(),val)
#define lb(v,idx,val) lower_bound(v.begin()+idx,v.end(),val)

#define vvi vector<vi>

void solve(){
    int n,m;
    cin>>n>>m;
    unordered_map<int,vector<int>> rows,column;
    unordered_map<int,int> cnt,rowssum,columnsum;
    vector<vi> v(n,vi(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>v[i][j];
           int x=v[i][j];
    
           rows[x].pb(i+1);
           column[x].pb(j+1);
           cnt[x]++;
           rowssum[x]+=i+1;
            columnsum[x]+=j+1;
        }
    }
    unordered_map<int,vector<int>> presumrows,presumcolumn;
      int ans=0;
    for(auto &xx:rows)
    {
        sortv(xx.s);
        vector<int> loc=xx.s;
        int totalsum=0;
        REP(i,0,loc.size())
        totalsum+=loc[i];
        int currsum=0;
        for(int i=0;i<loc.size();i++)
        {
            currsum+=loc[i];
            int leftelement=i+1;
            int remelement=loc.size()-i-1;
            ans+=abs(currsum-leftelement*loc[i]);
            ans+=abs(totalsum-currsum-remelement*loc[i]);
        }
    }
    for(auto &xx:column)
    {
        sortv(xx.s);
        vector<int> loc=xx.s;
        int totalsum=0;
        REP(i,0,loc.size())
        totalsum+=loc[i];
        int currsum=0;
        for(int i=0;i<loc.size();i++)
        {
            currsum+=loc[i];
            int leftelement=i+1;
            int remelement=loc.size()-i-1;
            ans+=abs(currsum-leftelement*loc[i]);
            ans+=abs(totalsum-currsum-remelement*loc[i]);
        }
       
    }
    
    cout<<ans/2<<"\n";
 
}

signed main() {
    fast;
    int t=1;
    // cin>>t;
    while(t--)
    solve();
}