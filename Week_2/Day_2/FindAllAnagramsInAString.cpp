class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans;
        int n = s.size();
        int k = p.size();

        if (k > n) return ans;

        unordered_map<char, int> pMap, winMap;

        for (char c : p)
            pMap[c]++;

        for (int i = 0; i < k; i++)
            winMap[s[i]]++;

        if (winMap == pMap)
            ans.push_back(0);

        for (int i = k; i < n; i++) {
            winMap[s[i]]++;        
            winMap[s[i - k]]--;   
            if (winMap[s[i - k]] == 0)
                winMap.erase(s[i - k]);

            if (winMap == pMap)
                ans.push_back(i - k + 1);
        }
        return ans;
    }
};
