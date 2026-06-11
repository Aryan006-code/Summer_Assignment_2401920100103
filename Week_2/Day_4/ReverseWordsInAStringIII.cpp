class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        int n = s.size();
        string ans = "";
        while (i < n) {
            string word = "";
            while (i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }
            reverse(word.begin(), word.end());
            if (!ans.empty()) {
                ans += ' ';
            }
            ans += word;
            i++; 
        }
        return ans;
    }
};
