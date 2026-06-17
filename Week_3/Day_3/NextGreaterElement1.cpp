class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        for (int x : nums1) {
            int idx = -1;
            for (int i = 0; i < nums2.size(); i++) {
                if (nums2[i] == x) {
                    idx = i;
                    break;
                }
            }
            int nextGreater = -1;
            for (int i = idx + 1; i < nums2.size(); i++) {
                if (nums2[i] > x) {
                    nextGreater = nums2[i];
                    break;
                }
            }
            res.push_back(nextGreater);
        }
        return res;
    }
};
