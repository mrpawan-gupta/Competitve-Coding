class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int n = endTime.size();
        int c = 0 ; 
        for(int i = 0; i < n ; i++){
            if(startTime[i]<=queryTime && queryTime<=endTime[i]) c++;
        }
        return c ;
    }
};