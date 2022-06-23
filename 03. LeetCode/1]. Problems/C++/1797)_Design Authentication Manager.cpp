class AuthenticationManager{
public:
    int netTime;
    map<string, pair<int, int>> timeFrame;

    AuthenticationManager(int netTime){
        this->netTime = netTime;
    }

    void generate(string tokenId, int currentTime){
        pair<int, int> p{0, 0};
        timeFrame[tokenId] = p;
        timeFrame[tokenId].first = currentTime;
        timeFrame[tokenId].second = currentTime + netTime;
    }

    void renew(string tokenId, int currentTime){
        map<string, pair<int, int>>::iterator it;
        it = timeFrame.find(tokenId);
        if (it != timeFrame.end()){
            if (currentTime < timeFrame[tokenId].second){
                timeFrame[tokenId].first = currentTime;
                timeFrame[tokenId].second = currentTime + netTime;
            }
        }
    }

    int countUnexpiredTokens(int currentTime){
        unsigned int count = 0;
        for (auto it = timeFrame.begin(); it != timeFrame.end(); it++){
            if (it->second.second > currentTime) count++;
        }
        return count;
    }
};

/**
 * Your AuthenticationManager object will be instantiated and called as such:
 * AuthenticationManager* obj = new AuthenticationManager(netTime);
 * obj->generate(tokenId,currentTime);
 * obj->renew(tokenId,currentTime);
 * int param_3 = obj->countUnexpiredTokens(currentTime);
 */