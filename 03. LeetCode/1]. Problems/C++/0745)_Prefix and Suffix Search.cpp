class WordFilter {
public:
    unordered_map<string, int> dict;
    
    WordFilter(vector<string>& words) {
        for(int i = 0;i < words.size();i++){
            string p;
            for(int j = 0;j < words[i].size();j++){
                p += words[i][j];
                string s ;
                 for(int k = words[i].size() - 1;k >=0;k--){
                     s = words[i][k] + s;
                     dict[p + "|" + s] = i + 1;
            }
        }

    }
    }
    
    int f(string prefix, string suffix) {
        
        return dict[prefix + "|" + suffix] - 1;
    }
};