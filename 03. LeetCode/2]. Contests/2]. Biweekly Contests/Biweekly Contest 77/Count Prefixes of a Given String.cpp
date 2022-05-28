class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        unordered_map<string,int>map;
        
        for(auto itr:words){
            map[itr]++;
        }
        string ans;
        int n=s.length();
        int count=0;
        
        for(int i=0;i<n;i++) {
            ans+=s[i];
            
            if(map.find(ans)!=map.end()){
                count+=map[ans];
            }
        }
        return count;
    }
};