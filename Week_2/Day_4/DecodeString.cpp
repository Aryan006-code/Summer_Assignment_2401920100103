class Solution {
public:
    string decodeString(string s) {
        stack<int> numberStack;
        stack<string> stringStack;

        int num = 0;

        for (char ch : s) {
            if (isdigit(ch)) {
                num = num * 10 + (ch - '0');
            }
            else if (ch == '[') {
                numberStack.push(num);
                stringStack.push("[");

                num = 0;
            }
            else if (ch == ']') {
                string curr = "";

                while (!stringStack.empty() && stringStack.top() != "[") {
                    curr = stringStack.top() + curr;
                    stringStack.pop();
                }
                stringStack.pop(); 

                int repeat = numberStack.top();
                numberStack.pop();

                string decoded = "";
                while (repeat--) {
                    decoded += curr;
                }
                stringStack.push(decoded);
            }
            else {
                stringStack.push(string(1, ch));
            }
        }

        string result = "";
        while (!stringStack.empty()) {
            result = stringStack.top() + result;
            stringStack.pop();
        }
        return result;
    }
};
