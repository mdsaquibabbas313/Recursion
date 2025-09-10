class Solution {
public:
    void solve(int i, string& s , string& op , vector<string>&ans) {

        if(i >= s.size()) {
            ans.push_back(op);
            return ;
        }

        // Desicion - Choices
        if(isalpha(s[i])) {
            string op1 = op;
            string op2 = op;

            op1 += tolower(s[i]);
            op2 += toupper(s[i]);

            solve(i+1 , s , op1 , ans);
            solve(i+1 , s , op2 , ans);
        } else {
            
            string op1 = op;

            op1 += s[i];
            solve(i+1 , s , op1 , ans);

        }
        


    }
    vector<string> letterCasePermutation(string s) {
        vector<string> ans;

        string temp = "";

        solve(0 , s , temp , ans);

        return ans;
    }
};