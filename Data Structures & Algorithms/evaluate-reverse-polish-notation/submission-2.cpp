class Solution {
public:
int evalRPN(vector<string>& tokens) {
    stack<string> st;
    for (const string& token : tokens) {
        if (token == "+" || token == "-" || token == "*" || token == "/") {
            if (st.empty()) {
                cout<<"stack is empty"<<endl;
                return 0;
            }
            int num2 = stoi(st.top());
            st.pop();
            int num1 = stoi(st.top());
            st.pop();
            int result;
            if (token == "+") {
                result = num1 + num2;
            } else if (token == "-") {
                result = num1 - num2;
            } else if (token == "*") {
                result = num1 * num2;
            } else { // token == "/"
                result = num1 / num2;
            }
            st.push(to_string(result));
        } else {
            st.push(token);
        }
    }
        return stoi(st.top());

}

        
};
