class MyCalendar{
public:
    set<pair<int, int>> iset;
    MyCalendar(){
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        cout.tie(0);
    }

    bool book(int start, int end){
        auto it = iset.lower_bound({start, end});
        bool ans;
        if (it == iset.end()){
            if (iset.size()){
                auto it1 = it;
                it1--;
                if (start >= (*it1).second) ans = true;
                else ans = false;
            }
            else ans = true;
        }
        else if (it == iset.begin()){
            if (end <= (*it).first) ans = true;
            else ans = false;
        }
        else {
            auto it1 = it;
            it1--;
            if (end <= (*it).first && start >= (*it1).second) ans = true;
            else  ans = false;
        }
        if (ans) iset.insert({start, end});
        return ans;
    }
};
/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */