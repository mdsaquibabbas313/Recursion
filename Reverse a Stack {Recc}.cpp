
class Solution {
  public:
    void insert(stack<int>& st , int top) {
        
        //B
        if(st.size() == 0) {
            st.push(top);
            return ;
        }
        
        //H
        int last = st.top();
        st.pop();
        
        insert(st , top);
        
        //I
        st.push(last);
    }
    void reverse(stack<int> &st) {
        // code here
        //B
        if(st.size() == 1){
            return ;
        }
        
        //H
        int top = st.top();
        st.pop();
        
        
        reverse(st);
        
        // I
        insert(st , top);
        
    }
};