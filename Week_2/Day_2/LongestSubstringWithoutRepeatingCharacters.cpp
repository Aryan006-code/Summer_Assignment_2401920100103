class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;

        int l = 0;
        int maxLen = 0;

        for (int r = 0; r < s.size(); r++) {

            if (mp.find(s[r]) != mp.end() && mp[s[r]] >= l) {
                l = mp[s[r]] + 1;
            }
            int len = r-l+1;
            mp[s[r]] = r;
            maxLen = max(maxLen, len);
        }
        return maxLen;
    }
};
