class Solution
{
public:
    string simplifyPath(string path)
    {

        stack<string> st;

        string temp;

        for (int i = 0; i < path.size(); i++)
        {
            if (path[i] == '/')
            {
                if (!temp.empty())
                {
                    if (temp[0] == '.')
                    {
                        if (temp.size() == 2 && !st.empty())
                            st.pop();
                        else if (temp.size() > 2)
                            st.push(temp);
                    }
                    else
                    {
                        st.push(temp);
                    }
                }
                temp.clear();
            }
            else
            {
                temp += path[i];
            }
        }

        if (!temp.empty())
        {
            if (temp[0] == '.')
            {
                if (temp.size() == 2 && !st.empty())
                    st.pop();
                else if (temp.size() > 2)
                    st.push(temp);
            }
            else
            {
                st.push(temp);
            }
        }

        string res = "";

        while (!st.empty())
        {
            auto top = st.top();
            st.pop();
            res.insert(0, top);
            res.insert(0, "/");
        }

        if (res.empty())
            res += '/';

        return res;
    }
};