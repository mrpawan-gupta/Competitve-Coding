#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using vc = vector<char>;
using vvc = vector<vc>;
using vs = vector<string>;
const ll mod = 1e9 + 7,inf = 1e18;
#define pb push_back
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int t,n = 3e5 + 5,m;
vvi adj(n);
vi in(n),ans;//ans represents the numbers assigned to each node

//in[i] represents the DEGREE OF node i which is the 
//NUMBER OF NEIGHBOURS OF i

bool is(int mid)
{
    queue<int>q;//for running the modification of Kahn's algorithm
    vi cin = in;//copy of the DEGREE list
    vi c(n + 1);//the numbers of the nodes
    int currentNumber = n;//the LARGEST number so far

    for (int i = 1;i<=n;i++){//since there can be more than 1 cc, we need to iterate
        //over all nodes and add all of them with cin[i] <= mid
        if (cin[i] <= mid){
            c[i] = currentNumber;
            currentNumber--;
            q.push(i);
        }
    }

    while (!q.empty()){
        int u = q.front();
        q.pop();

        for (int v:adj[u]){
            cin[v]--;//decrease the DEGREE of the neighbour
            if (c[v] != 0)continue;//the neighbour is VISITED
            if (cin[v] <= mid){//if the DEGREE is <= mid
                c[v] = currentNumber;//assign the number of the node to be the LARGEST
                //number so far
                currentNumber--;
                q.push(v);
            }
        }
    }

    for (int i = 1;i<=n;i++){
        if (c[i] == 0)//the node is not visited
            return false;
    }

    ans = c;//since we are returning true => opt = mid, ans = c
    return true;

}
int main()
{
    fast;
    cin>>t;

    while (t--){
        cin>>n>>m;

        for (int i = 1;i<=n;i++)adj[i].clear(),in[i] = 0;//reset the adjacency list 
            //and the
            //degrees of each node

        for (int i = 0;i<m;i++){
            int u,v;
            cin>>u>>v;
        
            adj[u].pb(v),adj[v].pb(u);
            in[u]++,in[v]++;//update the degree of u and the degree of v
        }

        int l = 0,r = n,opt = n;//binary search for the minimum value of the max Di

        while (l <= r){
            int mid = (l + r)/2;

            if (is(mid)){
                opt = mid;//and we also assigned the NUMBERS assigned to each node
                //to the global vector ans
                r = mid - 1;//binary search for a SMALLER VALUE
            }

            else l = mid + 1;
        }

        cout<<opt<<'\n';
        for (int i = 1;i<=n;i++)cout<<ans[i]<<" ";//the number assigned to each node
        cout<<'\n';
    }
    return 0;
}