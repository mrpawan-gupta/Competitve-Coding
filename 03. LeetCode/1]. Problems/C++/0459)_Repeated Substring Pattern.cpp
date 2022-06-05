class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        int L = s.length() / 2;
        for (int l = 1; l <= L; l++){
            if (s.length() % l != 0)
                continue;
            
            bool checkSame = true;
            for (int i = 0; i < s.length(); i += l){
                if (strncmp(&s[0], &s[i], l) != 0){
                    checkSame = false;
                    break;
                }
            }
            if (checkSame) return true;
        }
        
        return false;
    }
};