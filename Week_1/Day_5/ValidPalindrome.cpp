class Solution {
public:
    bool isAlphaNum(char x) {
        if ((x>='0' && x<='9') || tolower(x)>='a' && tolower(x)<='z'){
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        int n = s.length();
        int start = 0;
        int end = n-1;
        while(start < end){
           if(!isAlphaNum(s[start])){
                start++; continue;
            }
            if(!isAlphaNum(s[end])){
                end--; continue;
            }
            if (tolower(s[start]) != tolower(s[end])){
                return false;
            }
            start++;
            end--;
        }
        return true;

 
        }
 

};
