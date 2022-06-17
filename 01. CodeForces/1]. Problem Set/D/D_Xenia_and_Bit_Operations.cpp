/*
    Solution By :- Pawan Gupta ( पवन गुप्ता )[ CF - Mr.pawan_gupta, CC - guptapawan ]
*/
#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
        void solve(){
            int N,M,K =2,a,b;
	        cin >> N >> M;
	        for(int i =0; i < N; i++) K *=2;
	        vector<int> arr(K);
	        vector<int> Type(K,0);
	        for(int i =1; i < K/2; i++) Type[2*i] =Type[2*i+1] =1-Type[i];
	        for(int i =K/2; i < K; i++) cin >> arr[i];
	        for(int i =K/2-1; i > 0; i--) {
	        	if((Type[i]+N)%2 == 0) arr[i] =arr[2*i]^arr[2*i+1];
	        	else arr[i] =arr[2*i]|arr[2*i+1];}
	        for(int i =0; i < M; i++) {
	        	cin >> a >> b;
	        	int count =(K/2+a-1)>>1;
	        	arr[K/2+a-1] =b;
	        	while(count > 0) {
	        		if((Type[count]+N)%2 == 0) arr[count] =arr[2*count]^arr[2*count+1];
	        		else arr[count] =arr[2*count]|arr[2*count+1];
	        		count >>=1;}
	        	cout << arr[1] << "\n";
            }
        }
};

int main(int argc, char const *argarr[]){

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