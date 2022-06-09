class Solution{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures){
        stack<int> st;
        int n = temperatures.size();
        vector<int> v;
        for (int i = n - 1; i >= 0; i--){
            while (!st.empty() && (temperatures[i] >= temperatures[st.top()])){
                st.pop();
            }
            if (st.empty()){
                v.push_back(0);
            }
            else {
                v.push_back(st.top() - i);
            }
            st.push(i);
        }
        reverse(v.begin(), v.end());
        
        return v;
    }
};