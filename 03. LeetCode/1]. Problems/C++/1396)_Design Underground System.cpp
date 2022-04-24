class UndergroundSystem{
public:
    unordered_map<int, pair<string, int>> lasttime;
    unordered_map<string, vector<int>> intervals;
    UndergroundSystem(){
    }

    void checkIn(int id, string stationName, int t){
        lasttime[id] = {stationName, t};
    }

    void checkOut(int id, string stationName, int t)
    {
        int totaltime = t - lasttime[id].second;
        string laststation = lasttime[id].first;
        string code = laststation + "-" + stationName;

        intervals[code].push_back(totaltime);
        lasttime[id] = {stationName, t};
    }

    double getAverageTime(string startStation, string endStation)
    {

        long long total = 0;
        string code = startStation + "-" + endStation;

        for (auto i : intervals[code])
        {
            total += i;
        }
        double ans = (total * 1.0) / (intervals[code].size() * 1.0);
        return ans;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */