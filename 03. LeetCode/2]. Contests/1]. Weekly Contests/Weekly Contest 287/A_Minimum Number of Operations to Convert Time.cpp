class Solution{
public:
    int convertTime(string s, string g){
        int cnt = stoi(s.substr(0, 2)) * 60 + stoi(s.substr(3, 4));
        int gcnt = stoi(g.substr(0, 2)) * 60 + stoi(g.substr(3, 4));
        int count = gcnt - cnt;
        int ans = 0;
        while (count)
        {
            if (count >= 60)
                count -= 60;
            else if (count >= 15)
                count -= 15;
            else if (count >= 5)
                count -= 5;
            else
                count--;
            ans++;
            if (count == 0)
                return ans;
        }
        return ans;
    }
};