class Solution{
public:
    vector<string> letterCombinations(string digits){
        int int_digits[digits.size()];
        if (static_cast<int>(digits.size()) == 0){
            vector<string> ans;
            return ans;
        }
        const int length_of_digit{static_cast<int>(digits.size())};

        for (int i = 0; i < length_of_digit; i++) {
            int_digits[i] = digits[i] - '0';
        }
        string table[10] = {"0", "1", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string> ans = letterCombinationHelper(int_digits, length_of_digit, table);
        return ans;
    }

    vector<string> letterCombinationHelper(int digits[], int len, string strings_of_keypad[]){
        vector<string> result;
        queue<string> q;
        q.push("");
        while (!q.empty()){
            string str = q.front();
            q.pop();

            if (str.size() == len){
                result.push_back(str);
                // cout << "string pushed into the result: " << str << endl;
            }
            else{
                for (char chr : strings_of_keypad[digits[str.length()]]){
                    q.push(str + chr);
                    // cout << "\tstring pushed into the queue: " << str+chr << endl;
                }
            }
        }
        return result;
    }
};