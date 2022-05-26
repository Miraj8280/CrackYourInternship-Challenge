class Solution {
public:
    void generator(vector<string>& ans, int n, int open, int close, string str){
        // base case
        if(str.size() == 2 * n){
            ans.push_back(str);
            return;
        }
        
        // two conditions
        if(open < n) generator(ans, n, open + 1, close, str + "(");
        if(close < open) generator(ans, n, open, close + 1, str + ")");
    }
    
    
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        generator(ans, n, 0, 0, "");
        
        return ans;
    }
};
