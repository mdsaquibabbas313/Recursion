class Solution {
  public:
    void solve(int i , string& s , string op , vector<string>& ans) {
        
        if(i >= s.size()) {
            ans.push_back(op);
            return ;
        }
        
        string op1 = op;
        string op2 = op;
        
        op1+=" ";
        op1.push_back(s[i]);
        
        solve(i+1 , s , op1 , ans);
        
        op2.push_back(s[i]);
        
        solve(i+1 , s , op2 , ans);
        
        return ;
        
        
        
    }
    vector<string> permutation(string s) {
        // Code Here
        vector<string> ans;
        
        string op = "";
        op.push_back(s[0]);
        
        solve(1 , s , op , ans);
        
        return ans;
    }
};