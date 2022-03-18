class Solution
{
public:
    string removeDuplicateLetters(string s)
    {
        if (s.length() == 1)
            return s;
        map<char, int> mp;          // Count letters frequency
        stack<char> st;             // Store result
        vector<int> visited(26, 0); // Check if the letter is visited
        int index = 0;              // Index that refer to the letter in (visited vector)
        for (char c : s)
            mp[c]++; // Count letter frequency
        for (char c : s)
        {
            index = (c - 'a');
            mp[c]--; // Reduce the letter frequency
            // If the letter has already visited, ignore it
            if (visited[index])
                continue;
            // Check if previous letter is duplicated and greater than current letter
            // then remove it from stack, and mark it as unvisited
            while (!st.empty() && st.top() > c && mp[st.top()] > 0)
            {
                visited[st.top() - 'a'] = 0;
                st.pop();
            } // end if
            // Otherwise
            st.push(c);         // Add the letter to the stack
            visited[index] = 1; // Mark the letter as visited
        }                       // end for
        s = "";
        // Append stack (the result) to string
        while (!st.empty())
        {
            s = st.top() + s;
            st.pop();
        } // end while
        return s;
    }
};