class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {

        // Remove the extra 0s from nums1
        while (A.size() > m) {
            A.pop_back();
        }

        // Append nums2 into nums1
        A.insert(A.end(), B.begin(), B.end());

        // Sort the merged array
        sort(A.begin(), A.end());
    }
};

