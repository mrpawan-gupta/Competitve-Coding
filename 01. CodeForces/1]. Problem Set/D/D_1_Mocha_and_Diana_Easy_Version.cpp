/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;
int f1[1010], f2[1010];
int e1[1010][1010], e2[1010][1010];
 
int find1(int x){
	if(f1[x] == x)return x;
	else return f1[x] = find1(f1[x]);
}
 
int find2(int x){
	if(f2[x] == x)return x;
	else return f2[x] = find2(f2[x]);
}
class Solution{
    public:
        void solve(){
            int n, m1, m2;
	        cin >> n >> m1 >> m2;
	        for(int i = 1; i <= n; i ++){
	        	f1[i] = f2[i] = i;
	        }
	        for(int i = 0; i < m1; i ++){
	        	int a, b;
	        	cin >> a >> b;
	        	e1[a][b] = e1[b][a] = 1;
	        	f1[find1(a)] = find1(b);
	        }
	        for(int i = 0; i < m2; i ++){
	        	int a, b;
	        	cin >> a >> b;
	        	e2[a][b] = e2[b][a] = 1;
	        	f2[find2(a)] = find2(b);
	        }
	        vector<pair<int, int> > ans;
	        for(int i = 1; i <= n; i ++){
	        	for(int j = i + 1; j <= n; j ++){
	        		if(e1[i][j] or e2[i][j])continue;
	        		if(find1(i) == find1(j) or find2(i) == find2(j)){
	        			continue;
	        		}
	        		ans.emplace_back(i, j);
	        		f1[find1(i)] = find1(j);
	        		f2[find2(i)] = find2(j);
	        	}
	        }
	        cout << ans.size() << '\n';
	        for(auto &i: ans){
	        	cout << i.first << ' ' << i.second << '\n';
	        }
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