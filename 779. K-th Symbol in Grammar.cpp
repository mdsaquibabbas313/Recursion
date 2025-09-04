class Solution {
public:
    int kthGrammar(int n, int k) {
        
        // B

        if(n == 1 && k == 1) 
            return 0;

        int mid = pow(2 , n-1) / 2;

        int ans = 1;
        if(k <= mid) 
            ans = kthGrammar(n-1 , k);
        else
            ans = !kthGrammar(n-1 , k-mid);

        return ans;


    }
};