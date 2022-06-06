class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stack;
        int result = 0;
        int Top = 0;
        for (int i=0; i<tokens.size(); i++){
            if(tokens[i]!="+" and tokens[i]!="-" and tokens[i]!="*" and tokens[i]!="/"){
                result = std::stoi(tokens[i]);
                stack.push(result);
            }
            else{
                Top = stack.top();
                stack.pop();
                result = stack.top();
                stack.pop();
                if(tokens[i] == "+") stack.push(result + Top);
                if(tokens[i] == "-") stack.push(result - Top);
                if(tokens[i] == "/") stack.push(result / Top);
                if(tokens[i] == "*") stack.push(result * Top);
            }
            
        }
        result = stack.top();
        stack.pop();
        return result;
    }
};