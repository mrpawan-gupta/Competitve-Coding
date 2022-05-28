class Solution {
public:
    string removeDigit(string number, char digit) {
        int count = 0;
        int n = number.length();
        for(int i=0;i<n;i++)
            if(number[i]==digit)
                count++;
        if(count == 1) {
            string temp;
            for(int i=0;i<n;i++) {
                if(number[i]!=digit){
                    temp.push_back(number[i]);
                }
            }
            return temp;
        }
        vector<string> v;
        while(count--){
            for(int i=0;i<n;i++) {
                if(number[i]==digit){
                    string temp;
                    for(int j=0;j<n;j++){
                        if(j!=i){
                            temp.push_back(number[j]);
                        }
                    }
                    v.push_back(temp);
                }
            }
        }
        string maxi = "-1";
        for(int i=0;i<v.size();i++){
            if(v[i] > maxi) maxi = v[i];
        }
        return maxi;
        
    }
};