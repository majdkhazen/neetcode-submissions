class Solution {
public:
// string : (([{}]){})
// stack  :  
 bool isValid(string s) {
    stack<int> stack;
    for (char c : s) {
        if (c == '(' || c == '{' || c == '[') {
            stack.push(c);
        } else {
            if (stack.empty()) return false;
            char top = stack.top();
            if ((c == ')' && top != '(') || 
                (c == '}' && top != '{') || 
                (c == ']' && top != '[')) {
                return false;
            }
            stack.pop();
        }
    }
    if(!stack.empty())
        return false;
    return true;

}

};
