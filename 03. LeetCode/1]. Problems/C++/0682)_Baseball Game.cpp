class Solution{
public:
    int calPoints(vector<string> &ops){

        stack<int> st;
        int cnt1;
        int cnt2;
        int ans = 0;

        for (auto value : ops){
            if (value == "C"){
                st.pop();
            }
            else if (value == "D"){
                st.push(st.top() * 2);
            }
            else if (value == "+"){
                cnt1 = st.top();
                st.pop();
                cnt2 = cnt1 + st.top();
                st.push(cnt1);
                st.push(cnt2);
            }
            else{
                st.push(stoi(value));
            }
        }

        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};