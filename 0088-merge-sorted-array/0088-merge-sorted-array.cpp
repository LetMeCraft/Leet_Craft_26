class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        // Remove the extra 0s from nums1
        while (nums1.size() > m) {
            nums1.pop_back();
        }

        // Append nums2 into nums1
        nums1.insert(nums1.end(), nums2.begin(), nums2.end());

        // Sort the merged array
        sort(nums1.begin(), nums1.end());
    }
};