class Solution{
public:
    int find(int h, vector<int> &manager, vector<int> &informTime){
        if (manager[h] == -1) return informTime[h];
        informTime[h] += find(manager[h], manager, informTime);
        manager[h] = -1;
        return informTime[h];
    }

    int numOfMinutes(int n, int headID, vector<int> &manager, vector<int> &informTime) {
        int maxtime = 0;
        for (int i = 0; i < n; i++) {
            if (informTime[i] == 0){
                maxtime = max(maxtime, find(i, manager, informTime));
            }
        }
        return maxtime;
    }
};