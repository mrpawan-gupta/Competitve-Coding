class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans(nums1.size(), -1);
        vector<int> temp(nums2.size(), -1);
        stack<int> st;
        for (int i = nums2.size() - 1; i >= 0; i--)
        {
            if (st.empty())
            {
                temp[i] = -1;
                st.push(nums2[i]);
            }
            else if (nums2[i] < st.top())
            {
                temp[i] = st.top();
                st.push(nums2[i]);
            }
            else
            {
                while (!st.empty() and nums2[i] > st.top())
                {
                    st.pop();
                }
                if (st.empty())
                    temp[i] = -1;
                else
                    temp[i] = st.top();
                st.push(nums2[i]);
            }
        }
        for (int i = 0; i < nums1.size(); i++)
        {
            for (int j = 0; j < nums2.size(); j++)
            {
                if (nums1[i] == nums2[j])
                {
                    ans[i] = temp[j];
                }
            }
        }
        return ans;
    }
};