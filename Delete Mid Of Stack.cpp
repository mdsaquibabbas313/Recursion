class Solution {
  public:
    // Function to delete middle element of a stack.
    void solve(stack<int>& s , int k) {
        
        // B
        if(k == 1) {
            s.pop();
            return ;
        }
        
        // H
        int top = s.top();
        s.pop();
        
        solve(s , k-1);
        
        // I
        s.push(top);
        return ;
    }
    void deleteMid(stack<int>& s) {
        // code here..
        if (s.empty()) {
            return;
        }
        int k;
        k = s.size()/2 + 1;
        solve(s , k);
        
        
    }
};