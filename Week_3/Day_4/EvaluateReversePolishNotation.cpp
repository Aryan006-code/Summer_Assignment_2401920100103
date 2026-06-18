class Solution {
public:
    int evaluateOp(int num1, int num2, string op){
        int result;
        if(op == "+"){
            result = num1 + num2;
        }
        if(op == "-"){
            result = num1 - num2;
        }
        if(op == "*"){
            result = num1 * num2;
        }
        if(op == "/"){
            result = num1 / num2;
        }
        return result;
    }

    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        int res;
        if(tokens.size() == 1){
            return stoi(tokens[0]);
        }
        for(int i = 0; i < tokens.size(); i++){
            if(tokens[i] == "+" || tokens[i] == "-" ||tokens[i] == "*" ||tokens[i] == "/" ){
                string op = tokens[i];
                int n2 = st.top();
                st.pop();
                int n1 = st.top();
                st.pop();
                res = evaluateOp(n1,n2,op);
                st.push(res);
            }
            else{
                int num = stoi(tokens[i]);
                st.push(num);
            }
        }
        return res;
    }
};
