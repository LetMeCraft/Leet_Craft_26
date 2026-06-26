class Solution {
public:
    vector<string> ans;

    void backtrack(string& curr, int open, int close, int n) {
        // Base case
        if (curr.size() == 2 * n) {
            ans.push_back(curr);
            return;
        }

        // Add '(' if we still have some left
        if (open < n) {
            curr.push_back('(');
            backtrack(curr, open + 1, close, n);
            curr.pop_back(); // backtrack
        }

        // Add ')' only if it won't make the string invalid
        if (close < open) {
            curr.push_back(')');
            backtrack(curr, open, close + 1, n);
            curr.pop_back(); // backtrack
        }
    }

    vector<string> generateParenthesis(int n) {
        string curr = "";
        backtrack(curr, 0, 0, n);
        return ans;
    }
};