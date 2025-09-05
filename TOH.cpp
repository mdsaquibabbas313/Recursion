class Solution {
  public:
    int towerOfHanoi(int n, int from, int to, int aux) {
        // code here
        if(n == 1) {
            return 1;
        }
        
        int total = 0;
        total += towerOfHanoi(n-1 , from , aux , to);
        total++;
        total += towerOfHanoi(n-1 , aux , to , from);
        
        return total;
        
    }
};