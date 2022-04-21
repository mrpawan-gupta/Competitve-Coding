class MyHashSet{
public:
    vector<int> *store;
    MyHashSet(){
        store = new vector<int>(1000001, 0);
    }

    void add(int key) {
        (*store)[key] = 1;
    }

    void remove(int key){
        (*store)[key] = 0;
    }

    bool contains(int key) {
        if ((*store)[key])
            return true;
        return false;
    }
};
/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */