class RandomizedSet {
private:
    unordered_map<int, int> countMap;
    vector<int> randomVec;
public:
    RandomizedSet() {

    }
    
    bool insert(int val) {
        if(countMap.find(val) != countMap.end()) {
            return false;
        }
        countMap[val] = randomVec.size();
        randomVec.push_back(val);
        return true;
    }
    
    bool remove(int val) {
        if(countMap.find(val) == countMap.end()) {
            return false;
        }
        countMap[randomVec[randomVec.size()-1]] = countMap[randomVec[countMap[val]]];
        swap(randomVec[randomVec.size()-1], randomVec[countMap[val]]);
        countMap.erase(val);
        randomVec.pop_back();
        return true;
    }
    
    int getRandom() {
        return randomVec[rand()%randomVec.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */